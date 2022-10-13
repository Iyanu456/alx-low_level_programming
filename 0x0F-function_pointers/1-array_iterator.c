#include <stdlib.h>
/**
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	int n;

	for (i = 0; i < size; i++)
	{
		n = array[i];
		action(n);
	}
}
