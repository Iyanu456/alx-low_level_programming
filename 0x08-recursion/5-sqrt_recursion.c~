#include "main.h"
#include "string.h"
#include <stdio.h>
/**
 * _pow_recursion - calculates the value of x raised to power y
 * @x: an integer (base)
 * @y: an integer (exponent)
 * Description: calculates the value of x raised to power y
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
