#include "lists.h"
/**
 * free_listint2 - frees a node list
 * @head: head node pointer
 * Description: frees a node list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	node = *head;
	while (head)
	{
		temp = node->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
