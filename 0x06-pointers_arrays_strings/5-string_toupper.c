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
	int i;

	for (i = 0; i <= strlen(c) - 1; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 35;
		}
		else
		{
			continue;
		}
		return (c);
}
