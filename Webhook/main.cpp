#include "Webhook.h"

int main(void)
{
	Webhook yolo;
	if (yolo.webhook_action())
	{
		std::cout << "SACCESSSS";
	}
	else
	{
		std::cout << "FAAAAAILD";
	}
	return 0;
}