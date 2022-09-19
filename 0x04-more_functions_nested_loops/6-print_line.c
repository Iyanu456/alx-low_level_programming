#include "main.h"
/**
 * print_line - checks for uppercase
 * @n: an integer
 * Description: checks for uppercase
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
			_putchar ('_');
		}
		else
		{
			_putchar ('\n');

			break;
		}
	}
	_putchar ('\n');
}
