#include "main.h"
/**
 * print_line - checks for uppercase
 * Description: checks for uppercase
 */
int print_line(int n)
{
	for (a = 0; a <= n; a++)
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
