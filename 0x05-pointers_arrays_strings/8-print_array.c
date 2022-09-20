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

	for (i = 0; i <= n; i++)
	{
		_putchar (a[i]);
		_putchar (',');
		_putchar (' ');
	}
	_putchar ('\n');
}
