#include "lists.h"
/**
 * free_listint - frees a node list
 * @head: head node pointer
 * Description: frees a node list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}
}
