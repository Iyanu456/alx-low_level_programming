#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - finds the sum of given numbers
 * @seperator: seperator
 * @n: integer
 * Description: finds the sum of given numbers
 * Return: integer
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	int n = 0;

	if (separator != NULL)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			n = va_arg(ap, int);

			printf("%d", n);
			printf("%d", separator);
		}

		va_end(ap);

		printf("\n");
	}
}
