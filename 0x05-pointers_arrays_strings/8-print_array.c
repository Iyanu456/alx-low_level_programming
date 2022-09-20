#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array -reverses a string
 * @a: array
 * @n: integer
 * Description: prints items in an array;
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			if (i == n - 1)
			{
				printf("%d", a[i]);
				printf("\n");
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}
	}
	}
	else
	{
		printf("\n");
	}
}
