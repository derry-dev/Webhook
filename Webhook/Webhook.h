#pragma once

#include <iostream>

#include <cstdio>
#include <curl/curl.h>

class Webhook
{
public:
	CURL *curl;
	CURLcode res;

	Webhook();
	~Webhook();

	bool webhook_action();

private:
	const char* webhook_link;
};