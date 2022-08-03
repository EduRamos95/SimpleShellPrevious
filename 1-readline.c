#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	int n = 0;
	/*ssize_t getline (char **restrict lineptr, size_t *restrict n, FILE *restrict stream);*/
	while (1)
	{
		printf("$ ");
		read = getline(&line, &len, stdin);
		if (read == -1)
			break;
		/*se incrementa un caracter ENTER*/
		n = strlen(line);
		/* /bin/ls_-l_-a\0 -->13 sin nulo*/
		printf("line->_%s_(ENTER)\n",line);
		printf("n->_%d\n", n);
		printf("read->_%ld\n", read);
	}
	free(line);
	return (0);
}
