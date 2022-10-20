#include "lists.h"
/**
 * add_node - creates a new node
 * @head: head node pointer
 * Description: creates a new node
 * Return: size
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_ptr;

	list_t *new_node;

	new_ptr = *head;
	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->next = new_ptr;
	new_ptr = new_node;
	return (new_node);
}
