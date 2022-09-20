#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcpy - prints a string
 * @dest: string destination
 * @src: string source
 * Description: prints a string to std output
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	char *c;

	c = *dest;
	return (c);
}
