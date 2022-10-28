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
 * binary_to_uint - converts binary to decimal
 * @b: decimal in charv type
 * Description: converts binary to decimal
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, k, n;

	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;

	for (k = i - 1; k >= 0; k--)
	{
		if (b[k] == 49)
			n = 1;

		if (b[k] == 48)
			n = 0;

		if (b[k] <48 || b[k] > 49)
			return (0);
		else
			result += (n * power(2, i - 1 -k));
	}

	return (result);
}
