#include <stdio.h>
/**
 * main - prints all alphabets
 * Description: prints all the alphabets from a to z
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	if (x == 'e' || x == 'q')
	{
	continue;
	}
	putchar (x);
	}
	putchar ('\n');
	return (0);
}
