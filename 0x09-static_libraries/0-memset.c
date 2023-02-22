#include "main.h"
#include <string.h>
/**
 * _memset - rests an integer to 98
* @s: char
^ @b: char
 * Description: resets a number to 98
 * Return: integer
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
