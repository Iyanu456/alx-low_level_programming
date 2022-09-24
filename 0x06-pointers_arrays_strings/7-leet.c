#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * leet - converts lower to upper case
 * @c: alphabet
 * Description: converts lower to upper case
 * Return: char
 */
char *leet(char *c)
{
	int i, j;

	j = strlen(c) - 1;
	for (i = 0; i <= j; i++)
	{
		if (c[i] == 'a' || c[i] == 'A')
		{
			c[i] = '4';
		}
		else if (c[i] == 'e' || c[i] == 'E')
		{
			c[i] = '3';
		}
		else if (c[i] == 'o' || c[i] == 'O')
		{
			c[i] = '0';
		}
		else if (c[i] == 't' || c[i] == 'T')
		{
			c[i] = '7';
		}
		else if (c[i] == 'l' || c[i] == 'L')
		{
			c[i] = '1';
		}
		else
		{
			continue;
		}
	}
	return (c);
}
