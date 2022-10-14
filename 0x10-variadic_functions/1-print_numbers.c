#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - finds the sum of given numbers
 * @separator: seperator
 * @n: integer
 * Description: finds the sum of given numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	int b;

	const char *str = separator;

	if (str != NULL)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			b = va_arg(ap, int);

			printf("%d", b);

			if (i == n - 1)
				break;

			printf("%s", str);
		}

		va_end(ap);

		printf("\n");
	}
}
