#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds
 * @a: integer
 * @b: integer
 * Description: adds two integers
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: integer
 * @b: integer
 * Description: subracts
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
