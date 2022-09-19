#include "main.h"
#include <publib.h>
#include <string.h>
/**
 * print_rev -reverses a string
 * @s: string
 * Description: prints a string to std output
 */

void print_rev(char *s)
{
	char b;

	b = strrev(s);
	_putchar (b);
}
