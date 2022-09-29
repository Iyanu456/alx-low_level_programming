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
	if (*s)
	{
		_print_rev_recursion(s + 1)
		_putchar (*s);
	}
}
