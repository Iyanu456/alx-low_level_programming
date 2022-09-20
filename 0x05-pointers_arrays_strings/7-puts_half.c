#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints a string
 * @str: integer
 * Description: prints a string to std output
 */

void puts_half(char *str)
{
	int n, i, k;

	n = (strlen(str) - 1);
	k = (strlen(str) / 2);
	for (i = k; i < n; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
