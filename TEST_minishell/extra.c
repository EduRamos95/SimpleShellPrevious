#include <main.h>

/**
 *NOT_ENTER - block enter
 *@Line_comand: string
 *Return: new string with '\n'
 */
char *NOT_ENTER(char *Line_comand)
{
	char *new = NULL;
	int n;
	new = Line_comand;
	n = strlen(new);
	new[n - 1] = '\0';
	return (new);
	
}

/**
 *free_arg - free all
 *@arg: address to pointer
 *
 */
void free_arg(char **arg)
{
        size_t i = 0;

        if (arg == NULL)
        {
                return;
        }

        while (arg[i])
        {
                free(arg[i]);
                i++;
        }

       /* if (arg[i] == NULL)
        {
                free(arg[i]);
        }*/

        free(arg);
}
