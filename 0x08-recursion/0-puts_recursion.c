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
	long unsigned int i;

	i = 0;
	_putchar(s[i]);
	i++;
	if (i < strlen(s))
	{
		_puts_recursion(s);
	}
}
