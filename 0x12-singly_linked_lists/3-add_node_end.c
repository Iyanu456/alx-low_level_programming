#include "lists.h"
/**
 * add_node_end - adds a new node to the end of a list
 * @head: head node pointer
 * @str: string
 * Description: adds a new node to the end of a list
 * Return: size
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;

	size_t len = 0;

	char *dup;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	dup = strdup(str);

	new_node->str = dup;

	while (dup[len] != '\0')
		len++;

	new_node->len = len;
	new_node->next = NULL;
	last = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}
