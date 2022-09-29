#include "main.h"
#include "string.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a atring through recursion
 * @s: a string
 * Description: prints a string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i, j;

	i = 0;
	j = strlen(s);
	if (i >= 0)
	{
		_putchar (s[j-i]);
		i++;
	}
	_print_rev_recursion(s);
}
