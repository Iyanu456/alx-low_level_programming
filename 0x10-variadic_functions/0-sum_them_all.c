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
	va_list item;

	int i, sum = 0;

	if (n)
	{
	if (n == 0)
		return (0);

	va_start(item, n);

	for (i = n; i >= 0; i = va_arg(item, int))
	{
		sum += i;
	}

	va_end(item);
	return (sum);
	}
	return (0);
}
