#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array
 * @size: size
 * @action: function to execute
 * Description: executes a function given as a parameter on each element of an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
