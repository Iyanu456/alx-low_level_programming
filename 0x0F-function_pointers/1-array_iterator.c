#include <stdlib.h>
/**
 * array_iterator - loops through an array
 * @array: array
 * @size: size
 * @action: executed function
 * Description: loops through an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size > 0 && action)
	{
	unsigned int i;

	int n;

	for (i = 0; i < size; i++)
	{
		n = array[i];
		action(n);
	}
	}
}
