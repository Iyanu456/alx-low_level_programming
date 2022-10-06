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

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	return (arr);
}
