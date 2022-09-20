#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array -reverses a string
 * @a: array
0;276;0c * @n: integer
 * Description: prints items in an array;
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d", a[i]);
			printf(",");
			printf(" ");
		}
	}
	}
}
