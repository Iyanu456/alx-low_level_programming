#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	int i;

	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' || '0')
			return (0);

		result += b[i] * (2 ^ i);
	}

	return (result);
}
