#include "main.h"
/**
 * print_square - prints a square
 * @size: dimension of square
 * Descrption: prints a square
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
