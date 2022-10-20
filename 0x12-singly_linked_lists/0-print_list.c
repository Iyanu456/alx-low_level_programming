#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			count++;
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
