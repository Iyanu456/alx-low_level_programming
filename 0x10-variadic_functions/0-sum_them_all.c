#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - finds the sum of given numbers
 * @n: integer
 * Description: finds the sum of given numbers
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	va_list item;
	if (n)
	{
	if (n == 0)
		return (0);

	va_start(item, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(item, int);
	}

	va_end(item);
	return (sum);
	}
	return (0);
}
