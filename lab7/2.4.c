#include <stdio.h>
#include <unistd.h>
	
int main()
{
	int pid = 1;
	int i;
	for (i = 0; i < 10000000; i++)
	{
		if (pid > 0)
		{
		pid = fork();
	}
	else
		sleep(10);
	}
	if (pid > 0)
		sleep(20);
	return 0;
	}
