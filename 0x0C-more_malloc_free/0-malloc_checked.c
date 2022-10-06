#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: intger (bytes)
 * Description: allocate memory of b bytes using malloc
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b <= 0)
	{
		exit(98);
	}
	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
