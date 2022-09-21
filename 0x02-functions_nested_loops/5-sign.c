#include <ctype.h>
#include "main.h"
/**
 * print_sign - test for lowercase
 * @n: The character to print
 * Description - test for lowecase letters
 * Return: integer values
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
