#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of given size
 * @size: size of array
 * @c: a char
 * Description: creates an array of gven size
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	if (size != 0)
	{
		unsigned int i;

		a = malloc(sizeof(char) * size);

		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}

		free(a);
		return (a);
	}
	else
	{
		return (NULL);
	}
}
