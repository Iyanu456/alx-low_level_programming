#include <ctype.h>
#include "main.h"
/**
 * _isalpha - test for lowercase
 * @c: The character to print
 *
 * Description - test for lowecase letters
 * Return: integer values
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
