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
	int i, results;

	results = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
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
