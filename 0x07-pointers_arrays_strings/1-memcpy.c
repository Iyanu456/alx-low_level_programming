#include "main.h"
#include <string.h>

/**
 * _memset - copies the first n bytes of the source area pointed to by dest
 * @dest: a char type(destination)
 * @src: a char type,(source)
 * @n: an unsigned integer
 * Description: fills the first n bytes of the memory area pointed to by s
 * Return: *s
 */

char *_memcpy(char *dest, char src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
