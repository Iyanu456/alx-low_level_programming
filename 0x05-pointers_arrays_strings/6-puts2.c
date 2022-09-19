#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - prints a string
 * @str: integer
 * Description: prints a string to std output
 */

void puts2(char *str)
{
	int n, i;

	n = (strlen(str) - 1);

	for (i = 0; i <= n, i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		else
		{
			_putchar((str[i]));
		}
	}
	return ('\n');
}
