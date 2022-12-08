#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the node list
 * @head: head node
 * @n: integer
 * Description: adds a new node to the end of a node list
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (*head);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	tmp = *head;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (*head)
	{
		if ((*head)->next == NULL)
		{
			new_node->prev = *head;
			(*head)->next = new_node;
			return (new_node);
		}
		*head = (*head)->next;
	}

	*head = tmp;

	return (new_node);
}
