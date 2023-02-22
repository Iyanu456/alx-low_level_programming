#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - concatenates two strings
 * Description: concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
