#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: a char
 * Description: duplicates a string
 * Return: char
 */

char *_strdup(char *str)
{
	char *str2;

	unsigned long int len, i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	str2 = malloc(sizeof(str) * (i - 1));

	while (str[len] != '\0')
	{
		str2[len] = str[len];
		len++;
	}
	if (str == NULL || str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		return (str2);
	}
}
