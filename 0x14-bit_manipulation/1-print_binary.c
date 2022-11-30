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

	if (exponent == 0)
		return (1);
	if (exponent == 1)
		return (base);
	for (i = exponent; i > 0; i--)
	{
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
	unsigned int test = n;

	int i = 0, count;

	while (power(2, i) <= test)
		i++;

	count = i;
	while (count >= 0)
	{
		if (test >= power(2, i))
			{
				printf("hello %d\n", power(2, i));
			}
		else
			printf("welcome %d\n", power(2, i));
		count--;
		i--;
		test -= power(2,i);
	}
	_putchar('\n');
}

int main(void)
{
	print_binary(4);
	return (0);
}
