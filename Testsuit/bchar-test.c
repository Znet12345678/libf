#include <libf/master.h>
#include <stdio.h>
int main()
{
	char *buff1 = "!test.l";
	char *buff2 = bchar(buff1,'.');
	if (cmpstr(buff2,"l"))
	{
		printf("Test 1 succeeded for target: bchar\n");
	}
	else
	{
		printf("Test 1 failed for target: bchar\n");
	}
}
