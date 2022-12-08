#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked list
 * @h: head node
 * Description: prints the total number of node in a node list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);
	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
