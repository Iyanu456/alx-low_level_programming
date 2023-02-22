#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: a char type(destination)
 * @accept: a char type,(source)
 * Description: function that gets the length of a prefix substring
 * Return: unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
