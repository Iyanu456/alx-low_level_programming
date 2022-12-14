#include "lists.h"
/**
 * add_node - creates a new node
 * @head: head node pointer
 * @str: string
 * Description: creates a new node
 * Return: size
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
		return (NULL);
	new_node->str = strdup(str);
	while (str[len] != '\0')
		len++;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
