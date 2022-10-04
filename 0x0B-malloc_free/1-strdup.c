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

	unsigned long int len;

	len = 0;
	str2 = malloc(sizeof(str));

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
