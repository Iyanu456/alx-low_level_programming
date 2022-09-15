#include "main.h"

/**
 * largest_numbber - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Description: checks for largest number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c;
	}
	else if (a > b && b < c)
	{
		largest = a;
	}
	else if (a < b && b > c)
	{
		largest = b;
	}
	else if (a > c && b > c)
	{
		largest = a;
	}
	else if (b < c && c < a)
	{
		largest = a;
	}
	return (largest);
}
