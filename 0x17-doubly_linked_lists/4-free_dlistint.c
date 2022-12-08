#include "lists.h"

/**
 * free_dlistint - frees a node list
 * @head: head node
 * Description: frees a node list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);
}
