#include <stdlib.h>
41;320;0c#include "main.h"
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
	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	str2 = malloc(sizeof(char) * (i - 1));

	while (str[len] != '\0')
	{
		str2[len] = str[len];
		len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		return (str2);
	}
}
