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
	int i, sum = 0;

	if (n)
	{
	if (n == 0)
		return (0);

	va_list item;
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
