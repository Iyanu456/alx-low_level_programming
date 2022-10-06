#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size_t (size)
 * Description: allocates memory for an array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	unsigned int i;

	char *new_arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * (nmemb + 1));

	if (arr == NULL)
		return (NULL);

	new_arr = arr;
	for (i = 0; i < (size * nmemb); i++)
	{
		new_arr[i] = '\0';
	}
	return (arr);
}
