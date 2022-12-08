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

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = *head;
	*head = new_node;
	return (*head);
}
