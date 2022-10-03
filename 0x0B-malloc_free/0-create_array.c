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
	if (size != 0)
	{
		char *a;

		int i;

		a = malloc(sizeof(a) * size);
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
		return (a);
	}
	else
	{
		char *array[1] = {"NULL"};
		return (array[0]);
	}
}