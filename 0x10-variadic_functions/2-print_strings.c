#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints a string
 * @separator: seperator
 * @n: integer
 * Description: prints a string
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	char *b;

	const char *str = separator;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			b = va_arg(ap, char *);

			if (b == NULL)
				printf("(nil)");

			else
				printf("%s", b);

			if (i == n - 1)
				break;

			if (str == NULL)
				continue;

			else
				printf("%s", str);
		}

		va_end(ap);

		printf("\n");
}
