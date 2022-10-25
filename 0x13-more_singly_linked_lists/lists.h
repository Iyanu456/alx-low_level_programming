#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct listint_s - node list struct
 * @n: length
 * @next: next struct pointer
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
/**
 * struct node - node list structt
 * @str: string
 * @next: next struct pointer
 */
typedef struct node
{
	char *str;
	struct node *next;
} node;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_list(listint_t *head);
#endif
