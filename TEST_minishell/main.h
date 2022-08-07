#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

extern char **environ;

list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
char **tokenize_line(char *line);
void print_env();
char *NOT_ENTER(char *Line_comand);
void free_arg(char **arg);
char *get_full_command(char *command);
#endif
