#include "lists.h"

/**
 * free_dlistint - frees a node list
 * @head: head node
 * Description: frees a node list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	tmp = head;

	while (head)
	{
		free(head);
		head = tmp->next;
	}
	free(head);
}
