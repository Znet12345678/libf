#include <libf/master.h>
#include <stdio.h>
int main()
{
	char *buff1 = "1234";
	if(zstrlen(buff1) == strlen(buff1))
	{
		printf("Test 1 Successful for target: str::zstrlen\n");
	}
	else
	{
		printf("Test 1 Failed for target: str::zstrlen \n");
	}
	if(cmpstr("test","test"))
	{
		printf("Test 2 Successful for target: str::cmpstr\n");
	}
	else
	{
		printf("Test 2 Failed for target: str::cmpstr\n");
	}
	if (!cmpstr("Test","test"))
	{
		printf("Test 3 Successful for target: str::cmpstr\n");
	}
	else
	{	
		printf("Test 3 Failed for target: str::cmpstr\n");
	}
	if (ncmpstr("Test","Test123",4))
	{
		printf("Test 4 Successful for target: str::ncmpstr\n");
	}
	else
	{
		printf("Test 4 Failed for target: str::ncmpstr\n"); 
	}
	if (ncmpstr("Test","Test",7) != 1)
	{
		printf("Test 5 successful for target: str::ncmpstr\n");
	}
	else
	{
		printf("Test 5 Failed for target: str::ncmpstr\n");
	}
	if(!ncmpstr("Test","Text",3))
	{
		printf("Test 6 Successful for target: str::ncmpstr\n");
	}
	else
	{
		printf("Test 6 Failed for target: str::ncmpstr\n");
	}
	if (!ncmpstr("Test","Hoobla",4))
	{
		printf("Test 7 Successful for target: str::ncmpstr\n");
	}
	else
	{
		printf("Test 7 Failed for target: str::ncmpstr\n");
	}
	//char *buff2 = "1";
	//zstrcpy(buff2,"23");
	printf("%d",bInStr("Hooblatestlb","test"));
	if (bInStr("Hooblatestlb","test"))
	{
		printf("Test 8 Successful for target: str::bInStr\n");
	}
	else
	{
		printf("Test 8 Failed for target :str::bInStr\n");
	}
}
