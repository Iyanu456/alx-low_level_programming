#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node at a certain index
 * @head: head node
 * @index: index of node
 * Description: finds a node at a certain index
 * Return: pointer to node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	unsigned int i = 0, size = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		size++;
		head = head->next;
	}

	if (index > size)
		return (NULL);

	tmp = head;

	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
