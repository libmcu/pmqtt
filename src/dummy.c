/*
 * SPDX-FileCopyrightText: 2022 Kyunghwan Kwon <k@mononn.com>
 *
 * SPDX-License-Identifier: MIT
 */

#include "pmqtt/mqtt.h"
#include <errno.h>

int mqtt_publish(struct mqtt_client *client, const struct mqtt_message *msg,
		bool retain)
{
	(void)client;
	(void)msg;
	(void)retain;
	return -ENOTSUP;
}

int mqtt_subscribe(struct mqtt_client *client,
		const struct mqtt_topic *topics, uint16_t count)
{
	(void)client;
	(void)topics;
	(void)count;
	return -ENOTSUP;
}

int mqtt_unsubscribe(struct mqtt_client *client,
		const struct mqtt_topic *topics, uint16_t count)
{
	(void)client;
	(void)topics;
	(void)count;
	return -ENOTSUP;
}

int mqtt_connect(struct mqtt_client *client)
{
	(void)client;
	return -ENOTSUP;
}

int mqtt_disconnect(struct mqtt_client *client)
{
	(void)client;
	return -ENOTSUP;
}

int mqtt_step(struct mqtt_client *client)
{
	(void)client;
	return -ENOTSUP;
}

int mqtt_client_init(struct mqtt_client *client, mqtt_event_callback_t cb)
{
	(void)client;
	(void)cb;
	return -ENOTSUP;
}

struct mqtt_client *mqtt_client_create(void)
{
	return 0;
}

void mqtt_client_delete(struct mqtt_client *client)
{
	(void)client;
}
