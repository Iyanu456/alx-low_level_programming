#include "lists.h"
/**
 * add_node - creates a new node
 * @head: head node pointer
 * Description: creates a new node
 * Return: size
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	char *dup;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
