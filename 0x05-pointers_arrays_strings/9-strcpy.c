#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcpy - prints a string
 * @dest: string destination
 * @src: string source
 * Description: prints a string to std output
 * Return: the value of dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
