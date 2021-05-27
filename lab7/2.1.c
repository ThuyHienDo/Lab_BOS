#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int pid = fork();
	if (pid == 0) {
		printf("Child process (pid) = %d\nParent process (ppid) = %d\n", getpid(), getppid());
	}
	return 0;
}
