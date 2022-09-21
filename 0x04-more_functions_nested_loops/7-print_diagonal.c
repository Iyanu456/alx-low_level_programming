#include "main.h"
/**
 * print_diagonal - checks for uppercase
 * @n: an integer
 * Description: checks for uppercase
 */
void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
			if (a == 0)
			{
				continue;
			}
			else
			{
				_putchar ('.');
			}
		}
		else
		{
			_putchar ('\n');

			break;
		}
	}
	_putchar ('\\');
	_putchar ('\n');
}
