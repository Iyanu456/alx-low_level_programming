#include <stdlib.h>
/**
 * int_index - searches for an integer in an array
 * @array: array
 * @size: size
 * @cmp: pointer to function
 * Description: searches for an integer in an array
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, n;

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		n = array[index];

		if (cmp(n) > 0)
			return (index);
	}

	return (-1);
}
