#include "main.h"
#include <stdlib.h>

/**
 * array_range - craete an array of integers
 * @min: starting point of array
 * @max: end of array
 * Description: allocates memory for an array
 * Return: int
 */

int *array_range(int min, int max)
{
	int *arr, i, j = min;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		arr[i] = j;
		j++;
	}

	return (arr);
}
