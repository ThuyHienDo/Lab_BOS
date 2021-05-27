#include <stdio.h>
	
extern char **environ;
int main(int argc, char *argv[])
{
	char **i;
	int count = 0;
	for (i = environ; *i != NULL; ++i) /* перебор всех элементов массива */
		++count;
		printf("Number of environment variables: %d\n", count);
	return 0;
}
