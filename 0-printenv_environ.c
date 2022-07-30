#include <stdio.h>

int main(void)
{
	extern char **environ;
	int i = 0;

	for (; *environ != NULL; i++)
		printf("%s\n", environ[i]);
	return (0);
}
