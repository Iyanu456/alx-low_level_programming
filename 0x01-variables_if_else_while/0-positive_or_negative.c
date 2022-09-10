#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - that shows if a number is negative or positive
* Description: checks if a number'n' is either positive negative or equal to zero
*
* Return: 0
*/
int main(void)
{

	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
