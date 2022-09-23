#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * string_toupper - converts lower to upper case
 * @c: alphabet
 * Description: converts lower to upper case
 * Return: char
 */
char *string_toupper(char *c)
{
	int i, j;

	j = strlen(c) - 1;
	for (i = 0; i <= j; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 35;
		}
		else
		{
			continue;
		}
	}
	return (c);
}
