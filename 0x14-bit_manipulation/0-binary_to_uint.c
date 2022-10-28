#include "main.h"
#include <string.h>
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
unsigned int binary_to_uint(const char *b)
{
	int i = 0, k, n;

	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != 48 || b[i] != 49)
			return (0);
		i++;
	}

	for (k = i - 1; k >= 0; k--)
	{
		if (b[k] == 49)
			n = 1;

		if (b[k] == 48)
			n = 0;

		result += (n * power(2, i - 1 -k));
	}

	return (result);
}
