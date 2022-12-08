#include "lists.h"

/**
 * add_dnodeint - adds a new node to the node list
 * @head: head node
 * @n: integer
 * Description: adds a new node to the node list
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
