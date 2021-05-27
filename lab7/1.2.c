#include <stdio.h>
	
extern char **environ;
int main(int argc, char *argv[])
{
	char **i;
	int count = 0;
	for (i = environ; *i != NULL; ++i)
	++count;
	printf("Number of environment variables: %d\n", count);
	printf("Number of arguments: %d\n", argc);
	return 0;
}
