#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' || '-' || '*' || '/' || '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || '%') && *argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[1], argv[3]);
	printf("%d", result);
	return (0);
}
