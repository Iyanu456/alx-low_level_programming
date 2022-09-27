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
	int i, k, current_sum1, current_sum2;

	current_sum1 = 0;
	current_sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (k = 0; k <= size; k++)
		{
		if (k != size)
		{
			current_sum1 += a[(size - 1 - k)];
			current_sum2 += a[i];
		}
		else
		{
			break;
		}
		}
	}
	printf("%d, %d", current_sum1, current_sum2);
}
