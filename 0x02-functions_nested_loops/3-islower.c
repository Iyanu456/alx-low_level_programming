#include "main.h"
/**
 * _islower - test for lowercase
 * Description - test for lowecase letters
 * Return: integer values
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
