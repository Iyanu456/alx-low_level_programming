#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square
 * @size: dimension of square
 * Descrption: prints a square
 */
void print_square(int size)
{
	int i;

	if (size > 0)
	{
	for (i = 0; i <= size; i++)

		_putchar ('\n');
		for (i = 0; i <= size - 1; i++)
		{
			_putchar ('#');
		}
		_putchar ('#');
		_putchar ('\n');
	}
	}
	else
	{
		_putchar ('\n');
	}
}
