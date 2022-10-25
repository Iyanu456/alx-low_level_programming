#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int result, a = 0, b = 0;

	char s;

	s = argv[2][0];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (s != '+' && s != '-' && s != '*' && s != '/' && s !=  '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((s == '/' || '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (get_op_func(argv[2]))(a, b);
	printf("%d", result);
	return (0);
}
