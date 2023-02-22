#include "lists.h"

/**
 * print_dlistint - prints the number of nodes
 * @h: head node
 * Description: prints the total number of node in a node list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);
	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
