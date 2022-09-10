#include <stdio.h>
/**
 * main - prints all alphabets
 * Description: prints all the alphabets from a to z
 * Return: 0
7 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar (x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
	putchar (x);
	}
	putchar ('\n');
	return (0);
}
