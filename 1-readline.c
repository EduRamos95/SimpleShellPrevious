#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	/*ssize_t getline (char **restrict lineptr, size_t *restrict n, FILE *restrict stream);*/
	while (1)
	{
		printf("$ ");
		read = getline(&line, &len, stdin);
		if (read == -1)
			break;
		printf("%s",line);
	}
	free(line);
	return (0);
}
