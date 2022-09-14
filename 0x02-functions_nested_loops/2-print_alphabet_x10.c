#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets
 * Decription: prints all lower case alphabets
 * Return: null
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar (j);
		}
		_putchar ('\n');
	}
}
