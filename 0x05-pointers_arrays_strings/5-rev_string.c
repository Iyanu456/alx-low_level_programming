#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string -reverses a string
 * @s: string
 * Description: prints a string to std output
 */

void rev_string(char *s)
{
	int n, i, k;

	k = (strlen(s) / '2');

	for (n = (strlen(s) - 1); n >= k; n--)
	{
		for (i = 0; i <= k; i++)
		{
			int p1, p2;

			p1 = s[i];
			p2 = s[n];

			s[i] = p2;
			s[n] = p1;
		}
	}
	_putchar ('\n');
}
