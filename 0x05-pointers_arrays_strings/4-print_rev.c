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

	n = (strlen(s) - 1);
	char arr[n];

	arr[n] = s;

	b = strrev(s);
	_putchar (b);
}
