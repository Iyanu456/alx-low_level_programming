#include "main.h"
#include <stdio.h>
0;276;0c#include <string.h>
/**
 * print_array -reverses a string
 * @a: array
 * @n: integer
 * Description: prints items in an array;
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			printf("\n");
			break ;
		}
		else if (i == n-1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
