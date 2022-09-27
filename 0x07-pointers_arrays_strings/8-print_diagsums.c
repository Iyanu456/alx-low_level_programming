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
	int i, *j , k, *n, current_sum1, current_sum2;

	j = 0;
	n = 0;
	*j = size;
	current_sum1 = 0;
	current_sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size - 1; k++)
		{
		if (k != size -1)
		{
			current_sum1 += (a[i][j - k]);
			*n = k;
			current_sum2 += (a[i][n]);
		}
		else
		{
			printf("%d, %d", current_sum1, current_sum2);
			break;
		}
		}
	}
}
