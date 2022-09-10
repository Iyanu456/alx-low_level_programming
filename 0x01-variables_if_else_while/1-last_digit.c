#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - that shows if a number is negative or positive
* Description: checks if a number is positive negative or equal to zero
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l = n % 10;
	if (l > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else if (l = 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, l);
	}
	return (0);
}
