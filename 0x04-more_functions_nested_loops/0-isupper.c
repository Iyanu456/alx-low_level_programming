#include"main.h"
#include <stdio.h>

/**
 * _isupper - checks if a character is upper case
 * @c: ascii value of letter
 * Description - checks if a letter is upper case or not
 * Return: 0 if true and 1 if false
 */

int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else if (isupper(c) < 0)
	{
		return (0);
	}
}
