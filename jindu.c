#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int i=0;
	char buf[102]="#";
	char sym[]="|/-\\";
	for(;i<=100;i++)
	{
		buf[i]='#';
		printf("[%-100s][%d%%][%c]\r",buf,i,sym[i%4]);
		fflush(stdout);
		usleep(100000);
	}
		printf("\n");
}
