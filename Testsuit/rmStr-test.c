#include <libf/master.h>
#include <stdio.h>
int main()
{
	char *buff = "Test1 Test2";
	rmStr(buff,"Test1 ");
	if(cmpstr(buff,"Test2"))
	{
		printf("Test1 Successful for target: rmStr\n");
	}
	else
	{
		printf("Test1 Failed for target:rmStr\n");
	}
}
