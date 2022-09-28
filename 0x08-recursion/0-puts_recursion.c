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
	if (i != '\0')
	{
		_puts_recursion(s);
		i++;
	}
	_putchar('\n');
}
