#include "main.h"
#include <string.h>

/**
 * power - raises a number to a power
 * @base: base
 * @exponent: exponent
 * Description: raises a number to a power
 * Return: unsigned int
 */

unsigned int power(int base, int exponent)
{
	int i;

	unsigned int result = 1;

	for (i = exponent; i > 0; i--)
	{
		if (exponent == 0)
			return (1);
		if (exponent == 1)
		{
			result = base;
			return (result);
		}
		result = result * base;
	}

	return (result);
}

/**
 * print_binary - converts decimal to binary
 * @n: decimal
 * Description: converts decimal to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0, j = 0, test = n;

	while (power(2, i) < test)
		i++;

	while (i >= 0)
	{
		if (test > power(2, i))
			{
				test = test - power(2, i);
				_putchar ('1');
			}
		else
			_putchar ('0');
		i--;
	}
}
