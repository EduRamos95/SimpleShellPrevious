#include <stdio.h>

int main(__attribute__((unused)) int argc,__attribute__((unused))  char **argv, char **env)
{
	extern char **environ;
	printf("%s\n", *env);
	printf("%s\n", *environ);
	return (0);
}
