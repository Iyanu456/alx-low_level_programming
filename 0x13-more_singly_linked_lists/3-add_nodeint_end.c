#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: head node pointer
 * @n: integer
 * Description: adds a new node to the end of a list
 * Return: size
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	last = *head;

	if (last == NULL)
		*head = new_node;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}
