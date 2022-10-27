#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] > 1)
			return (0);

		result += b[i] * (2 ^ i);
		i++;
	}

	return (result);
}
