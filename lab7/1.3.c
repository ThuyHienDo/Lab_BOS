#include <stdio.h>
	
	extern char **environ;
	int main(int argc, char *argv[])
	{
		char **p;
		int count = 1;
		for (p = environ; *p != NULL; p++){
		printf("%d - %s\n", count, *p);
		count++;
		if (count == 11)
		return 0;
	}
return 0;
	}
