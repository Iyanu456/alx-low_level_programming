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

	int i;

	i = 0;
	str2 = malloc(sizeof(str));

	while (str[i] != '\0')
	{
		str2[i] =  str[i];
		i++;
	}
	if (str == NULL || str2 = NULL)
	{
		return (NULL);
	}
	return (str2);
}
