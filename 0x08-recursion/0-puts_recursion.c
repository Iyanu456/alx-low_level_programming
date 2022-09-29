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
	j = 0;
	j = strlen(s);
	_putchar(s[i]);
	i++;
	if (i < j)
	{
		i++;
		_puts_recursion(s);
	}
}
