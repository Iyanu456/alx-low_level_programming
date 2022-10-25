#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct list_s - node list struct
 * @str: string
 * @len: length
 * @next: next struct pointer
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
typedef struct node
{
	char *str;
	struct node *next;
} node;

int _putchar(char c);
size_t print_listint(const list_t *h);
size_t listint_len(const list_t *h);
list_t *add_nodeint(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
