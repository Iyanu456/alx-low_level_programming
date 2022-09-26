#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: matrix size
 * Description: prints the sum of the two diagonals of a square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, current_sum1, current_sum2;

	k = 0;
	current_sum1 = 0;
	current_sum2 = 0;
	for (i = 0; i < size; i++)
	{
		j = size - 1 - k;
		if (j >= 0)
		{
			current_sum1 += a[i][j];
			current_sum2 += a[i][k];
			k++;
		}
		else
		{
			printf("%d, %d", current_sum1, current_sum2);
			break;
		}
	}
}
