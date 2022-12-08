#include "lists.h"

/**
 * sum_dlistint - sums all integers in node list
 * @head: head node
 * Description: sums all integers in a node list
 * Return: sum of integers
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	int sum = 0;

	if (head == NULL)
		return (0);

	tmp = head;

	while (tmp)
	{
		sum += head->n;
		tmp = tmp->next;
	}

	return (sum);
}
