#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * Description: concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
