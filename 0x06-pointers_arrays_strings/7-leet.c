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
	int i, j, k;

	char leet[8] = { 'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	j = strlen(c) - 1;
	for (k = 0; k <= j; k++)
	{
		for (i = 0; i <= 7; i++)
		{
			if (c[i] == leet[i] || c[i] == leet[i] + 32)
			{
				c[i] = i;
			}
			else
			{
				continue;
			}
		}
	}
	return (c);
}
