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

	unsigned int i;

	a = malloc(sizeof(char));

	for (i = 0; i < size; i++)
	{
		str2[i] =  str[i];
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (str2);
}
