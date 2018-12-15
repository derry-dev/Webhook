#include "Webhook.h"

Webhook::Webhook() :
webhook_link("https://webhook.site/7c716db5-7906-4288-a2df-9d17cf29310b")
{
	curl_global_init(CURL_GLOBAL_DEFAULT);
	curl = curl_easy_init();
}
Webhook::~Webhook()
{
	curl_easy_cleanup(curl);
	curl_global_cleanup();

	webhook_link = NULL;
}

bool Webhook::webhook_action()
{
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, webhook_link);

		res = curl_easy_perform(curl);
		if (res != CURLE_OK)
   			fprintf(stderr, "curl_easy_perform() failed: %s\n",
				curl_easy_strerror(res));
		return true;
	}
	else
	{
		return false;
	}
}