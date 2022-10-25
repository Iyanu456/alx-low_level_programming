#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints anything
 * char: char
 * @format: list of types of arguments passed
 * Description: prints a string
 * Return: void
 */

void print_int(int arg);
void print_char(char arg);
void print_float(float arg);
void print_pchar(char *arg);

void print_int(int arg);

void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0, j = 0;

	char *arr[4] = { 'c', 'i', 'f', 's'};

	typedef char c;

	typedef int i;

	typedef float f;

	typedef char *s;

	while (format != '\0')
	{
		while(arr != '\0')
		{
			if (arr[j] != format[i])
			{
				j++;
				continue;
			}
			va_start(args, 
}
