#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: a char
 * @s2: a char
 * Description: concatenates two strings
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	char *new_string;

	int i, size1, size2;

	size1 = 0;
	size2 = 0;
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	new_string = malloc(sizeof(char) * (size1 + size2 + 1));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		new_string[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		*(new_string + size1 + i) = s2[i];
	}
	new_string[size1 + size2] = '\0';
	return (new_string);
}
