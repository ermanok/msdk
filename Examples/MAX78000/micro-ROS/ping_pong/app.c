/******************************************************************************
 *
 * Copyright (C) 2024 Analog Devices, Inc. All Rights Reserved. This software
 * is proprietary to Analog Devices, Inc. and its licensors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

#include "rcl/rcl.h"
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/header.h>
#include <sensor_msgs/msg/image.h>
#include <sensor_msgs/msg/region_of_interest.h>

#include <stdio.h>
#include <unistd.h>
#include <time.h>

#include "FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "task.h"

#include "mxc_microros.h"
#include "led.h"

#define STRING_BUFFER_LEN 50

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Aborting.\n",__LINE__,(int)temp_rc); vTaskDelete(NULL);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}

rcl_publisher_t ping_publisher;
rcl_publisher_t pong_publisher;
rcl_subscription_t ping_subscriber;
rcl_subscription_t pong_subscriber;

std_msgs__msg__Header incoming_ping;
std_msgs__msg__Header outcoming_ping;
std_msgs__msg__Header incoming_pong;

int device_id;
int seq_no;
int pong_count;

void ping_timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
	RCLC_UNUSED(last_call_time);

	if (timer != NULL) {

		seq_no = rand();
		sprintf(outcoming_ping.frame_id.data, "%d_%d", seq_no, device_id);
		outcoming_ping.frame_id.size = strlen(outcoming_ping.frame_id.data);

		// Fill the message timestamp
		struct timespec ts;
		clock_gettime(CLOCK_REALTIME, &ts);
		outcoming_ping.stamp.sec = ts.tv_sec;
		outcoming_ping.stamp.nanosec = ts.tv_nsec;

		// Reset the pong count and publish the ping message
		pong_count = 0;
		if (rcl_publish(&ping_publisher, (const void*)&outcoming_ping, NULL) == RCL_RET_OK) {
            printf("Ping send seq %s\n", outcoming_ping.frame_id.data);
        } else {
            printf("Ping send req error\n");
        }

        LED_Toggle(0);
	}
}

void ping_subscription_callback(const void * msgin)
{
	const std_msgs__msg__Header * msg = (const std_msgs__msg__Header *)msgin;

    int incoming_id = 0, incoming_seq_no = 0;
    sscanf(msg->frame_id.data, "%i_%i", &incoming_seq_no, &incoming_id);

	// Dont pong my own pings
	if(incoming_id != device_id) {
		printf("Ping received with seq %s. Answering.\n", msg->frame_id.data);
		if (rcl_publish(&pong_publisher, (const void*)msg, NULL) == RCL_RET_OK) {
            LED_Toggle(1);
        } else {
            printf("Pong send req error\n");
        }
	}
}


void pong_subscription_callback(const void * msgin)
{
	const std_msgs__msg__Header * msg = (const std_msgs__msg__Header *)msgin;

	if(strcmp(outcoming_ping.frame_id.data, msg->frame_id.data) == 0) {
		pong_count++;
		printf("Pong for seq %s (%d)\n", msg->frame_id.data, pong_count);
	}
}

/* This is the entry point for your micro-ROS application.  The platform drivers in the
MSDK will run this function as an RTOS task after initializing micro-ROS and the custom
serial transports. */
void appMain(void *argument)
{
	rcl_allocator_t allocator = rcl_get_default_allocator();
	rclc_support_t support;

	// create init_options
	RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

	// create node
	rcl_node_t node;
	RCCHECK(rclc_node_init_default(&node, "pingpong_node", "", &support));

	/*
	Create publishers and subscribers.  These define the topics that this firmware will
	interact with, and the message types for each topic.
	*/
	// Create a reliable ping publisher
	RCCHECK(rclc_publisher_init_default(&ping_publisher, &node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Header), "/microROS/ping"));

	// Create a best effort pong publisher
	RCCHECK(rclc_publisher_init_best_effort(&pong_publisher, &node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Header), "/microROS/pong"));

	// Create a best effort ping subscriber
	RCCHECK(rclc_subscription_init_best_effort(&ping_subscriber, &node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Header), "/microROS/ping"));

	// Create a best effort  pong subscriber
	RCCHECK(rclc_subscription_init_best_effort(&pong_subscriber, &node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Header), "/microROS/pong"));

    /*
	Create a 2 second ping timer.  This is a software timer that is driven by the micro-ROS
	layer, and when it expires the associated callback function will be triggered.  "ping"
	messages are published from the callback.
	*/
	rcl_timer_t timer;
	RCCHECK(rclc_timer_init_default(&timer, &support, RCL_MS_TO_NS(2000), ping_timer_callback));

	// Create executor
	rclc_executor_t executor;
	RCCHECK(rclc_executor_init(&executor, &support.context, 3, &allocator));
	
    RCCHECK(rclc_executor_add_timer(&executor, &timer));

	RCCHECK(rclc_executor_add_subscription(&executor, &ping_subscriber, &incoming_ping,
		&ping_subscription_callback, ON_NEW_DATA));

	RCCHECK(rclc_executor_add_subscription(&executor, &pong_subscriber, &incoming_pong,
		&pong_subscription_callback, ON_NEW_DATA));

	// Create and allocate the pingpong messages
	char outcoming_ping_buffer[STRING_BUFFER_LEN];
	outcoming_ping.frame_id.data = outcoming_ping_buffer;
	outcoming_ping.frame_id.capacity = STRING_BUFFER_LEN;

	char incoming_ping_buffer[STRING_BUFFER_LEN];
	incoming_ping.frame_id.data = incoming_ping_buffer;
	incoming_ping.frame_id.capacity = STRING_BUFFER_LEN;

	char incoming_pong_buffer[STRING_BUFFER_LEN];
	incoming_pong.frame_id.data = incoming_pong_buffer;
	incoming_pong.frame_id.capacity = STRING_BUFFER_LEN;

	device_id = rand();

	while(1){
		rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));
		usleep(10000);
	}

	// Free resources
	RCCHECK(rcl_publisher_fini(&ping_publisher, &node));
	RCCHECK(rcl_publisher_fini(&pong_publisher, &node));
	RCCHECK(rcl_subscription_fini(&ping_subscriber, &node));
	RCCHECK(rcl_subscription_fini(&pong_subscriber, &node));
	RCCHECK(rcl_node_fini(&node));
}
