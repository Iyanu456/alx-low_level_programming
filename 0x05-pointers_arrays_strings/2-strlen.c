#include "main.h"
#include <string.h>
/**
 * _strlen - rests an integer to 98
* @s: integer
 * Description: resets a number to 98
 * Return: integer
 */

int _strlen(char *s)
{
	char a[1];

	int b;

	a[0] = *s;
	b = strlen (a);

	return (b);
}
