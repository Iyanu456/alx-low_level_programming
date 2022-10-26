#include "lists.h"
/**
 * free_listint2 - frees a node list
 * @head: head node pointer
 * Description: frees a node list
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	free(*head);
	return (temp->n);
}
