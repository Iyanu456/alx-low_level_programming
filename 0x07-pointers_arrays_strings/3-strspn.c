#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: a char type(destination)
 * @c: a char type,(source)
 * Description: locates a character in a string
 * Return: *s if character is found or null if otherwise
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
