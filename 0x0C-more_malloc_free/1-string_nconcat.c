#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: intger (bytes)
 * Description: concatenates s1 with the first n bytes of s2
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int length1 = 0, length2 = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}

	if (n >= length2)
	{
		n = length2;
	}

	str = malloc(sizeof(char) * (length1 + n + )1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		str[length1 + i] = s2[i];
	}

	str[length1 + n + 1] = '\0';

	return (str);
}
