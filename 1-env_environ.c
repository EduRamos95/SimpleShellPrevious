#include <stdio.h>

int main(int argc, char **argv, char **env)
{
	extern char **environ;
	printf("%p\n", env);
	printf("%p\n", environ);
	return (0);
}
