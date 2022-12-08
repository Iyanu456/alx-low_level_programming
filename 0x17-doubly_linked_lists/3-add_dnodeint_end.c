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
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (*head)
	{
		if ((*head)->next == NULL)
		{
			(*head)->next = new_node;
			break;
		}
		*head = (*head)->next;
	}

	return (new_node);
}
