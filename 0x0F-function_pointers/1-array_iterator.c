#include <stdlib.h>
/**
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
