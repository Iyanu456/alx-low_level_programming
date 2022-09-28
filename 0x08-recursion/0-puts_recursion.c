#include "main.h"

/**
 * _puts_recursion - prints a atring through recursion
 * @s: a string
 * Description: prints a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	_putchar(s[i]);
	i++;
	if (i == '\0')
	{
		_putchar('\n');
	}
	_puts_recursion(s);
}
