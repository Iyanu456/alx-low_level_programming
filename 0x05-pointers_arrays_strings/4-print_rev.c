#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev -reverses a string
 * @s: string
 * Description: prints a string to std output
 */

void print_rev(char *s)
{
	int n;

	for (n = (strlen(s) - 1); n >= 0; n--)
	{
		_putchar (s[n]);
	}
	_putchar ('\n');
}
