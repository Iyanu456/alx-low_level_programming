#include "main.h"
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: a char type(destination)
 * @to: a char type,(source)
 * Description: sets the value of a pointer to a char
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = &to;
}
