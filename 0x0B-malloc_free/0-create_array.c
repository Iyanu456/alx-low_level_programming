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
	char *a, *b;

	b = "NULL";
	if (size != 0)
	{
		unsigned int i;

		a = malloc(sizeof(a) * (size - 1));

		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}

		return (a);
		free(a);
	}
	else
	{
		return (b);
	}
}
