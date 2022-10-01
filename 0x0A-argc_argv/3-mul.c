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

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			results = 1;
			results *= atoi(argv[i]);
			printf("%d\n", results);
		}
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
