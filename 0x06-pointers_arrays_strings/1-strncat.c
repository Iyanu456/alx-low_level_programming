#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * Description: concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src, n);
	return (dest);
}
