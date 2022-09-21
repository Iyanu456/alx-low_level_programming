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

	for (i = 0; i < strlen(c); i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] = (c[i] + 35);
		}
		else
		{
			continue;
		}
	}
	return (c);
}
