#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: a char type
 * @b: a char type
 * @n: an unasigned integer
 * Description: fills the first n bytes of the memory area pointed to by s
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, j;

	j = 0;
	j = n;
	for (i = 0; i < j; i++)
	{
	memset(s + i, b, 1 * sizeof(char));
	}
	return (s);
}
