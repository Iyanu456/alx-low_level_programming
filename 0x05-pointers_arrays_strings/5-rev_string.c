#include "main.h"
#include <string.h>
/**
 * rev_string -reverses a string
 * @s: string
 * Description: prints a string to std output
 */

void rev_string(char *s)
{
	int n, i, k;

	k = (strlen(s) / 2);

	for (n = 0; n >= k; n--)
	{
		int i;

		i = s[n];
		s[i] = s[(strlen(s) - 1 - n)];
		s[(strlen(s) - 1 - n)] = i;
	}
}
