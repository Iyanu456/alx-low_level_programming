#include "lists.h"
/**
 * print_listint - prints a list
 * @h: node pointer
 * Description: prints a node list
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
