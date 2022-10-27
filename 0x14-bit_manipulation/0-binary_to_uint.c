#include "main.h"
unsigned int power(int base, int exponent)
{
	int i;

	unsigned int result = 1;

	for (i = exponent; i > 0; i--)
	{
		if (exponent == 0)
			return (1);
		result = result * base;
	}

	return (result);
}
unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	unsigned int result = 0, converted = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] > 1)
			return (0);

		converted = b[i] * power(2, i);
		result += converted;
		i++;
	}

	return (result);
}
