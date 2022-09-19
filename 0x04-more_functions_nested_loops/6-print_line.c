#include "main.h"
/**
 * print_line - checks for uppercase
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
		else if (n <= 0)
		{
			_putchar ('\n');

			break;
		}
	}
}
