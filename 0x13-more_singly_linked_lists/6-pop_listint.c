#include "lists.h"
/**
 * pop_listint - frees a node list
 * @head: head node pointer
 * Description: frees a node list
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int n;

	if (head == NULL)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
