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
	if(s)
	{
		_putchar(s[0]);
	}
}
