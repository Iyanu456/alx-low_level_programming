#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: a char type
 * @b: a char type
 * @n: an unasigned integer
 * Description: fills the first n bytes of the memory area pointed to by s with the constant byte b
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char c = memset(s, b, n);
	return (c);
}
