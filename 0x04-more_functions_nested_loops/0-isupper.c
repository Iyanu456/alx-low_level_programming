#include "main.h"
/**
 * _isupper - checks for uppercase
 * Description: checks for uppercase
 * @c: integer value
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c == a)
		{
			return (1);
		}
		else
		{
			continue;
		}
	}
	return (0);
}
