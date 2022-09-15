#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - computes absolute values
 * Description - computes absolute values
 * Return: integer values
 */
int print_last_digit(int n)
{
	char last_digit = (n % 10);
	_putchar (last_digit);
	return (last_digit + '\n');
}
