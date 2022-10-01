#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calls main function
 * @argc: argument count
 * @argv: argument variable
 * Description: prints string format of cl arguments
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i, n, results;

	results = 1;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (n = 'a'; n <= 'z'; n++)
			{
				if (*argv[i] == n)
				{
					printf("Error\n");
					return (1);
				}

			results += atoi(argv[i]);
			}
		}
		printf("%d\n", results);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
