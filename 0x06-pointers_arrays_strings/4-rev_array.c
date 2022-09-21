#include "main.h"
#include <string.h>
/**
0;276;0c * reverse_array -reverses a string
 * @a: an array
 * @n: number of array element
 * Description: prints a string to std output
 */

void reverse_array(int *a, int n)
{
	int i, k;

	if (n >= 0)
	{
	for (i = 0; i < n; i++)
	{
		k = a[i];
		a[i] = a[(n - 1 - i)];
		a[(n - 1 - i)] = k;
	}
	}
	else
	{
		_putchar ('\n');
	}
}
