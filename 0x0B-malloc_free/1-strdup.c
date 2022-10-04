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
	str2 = malloc(sizeof(char));

	while (str)
	{
		str2[i] =  str[i];
		i++
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (str2);
}
