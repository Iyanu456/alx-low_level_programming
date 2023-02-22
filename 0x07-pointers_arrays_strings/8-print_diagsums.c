#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: matrix size
 * Description: prints the sum of the two diagonals of a square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		if (i != size)
		{
			sum1 += a[i];
			sum2 += a[size - 1 - i];
			a += size;
		}
		else
		{
			break;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
