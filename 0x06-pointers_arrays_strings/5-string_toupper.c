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

	char b;

	for (i = 0; i < strlen(c); i++)
	{
		b = toupper(c[i]);
	}
	return (b);
}
