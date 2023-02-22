#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: a char type(destination)
 * @needle: a char type,(source)
 * Description: function that locates a substring
 * Return: *s if true or NULL if false
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
