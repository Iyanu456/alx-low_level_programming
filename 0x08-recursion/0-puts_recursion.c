#include "main.h"
#include "string.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a atring through recursion
 * @s: a string
 * Description: prints a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i, j;

	i = 0;
	j = strlen(s);
	if (i < j)
	{
		_putchar (s[0]);
		_puts_recursion(s + 1);
	}
	_putchar ('\n');
}
