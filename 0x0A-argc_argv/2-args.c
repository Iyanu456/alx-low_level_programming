#include "main.h"
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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
