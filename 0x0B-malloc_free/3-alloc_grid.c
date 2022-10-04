#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - concatenates two strings
 * @width: width of grid
 * @height: height of grid
 * Description: concatenates two strings
 * Return: char
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, n, element = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int) * (width + height + 1));

	for (i = 0; i < height; i++)
	{
		*(grid + i);
		for (n = 0; n < width; n++)
		{
			grid[n] = 0;
		}
	}

	return (grid);
}
