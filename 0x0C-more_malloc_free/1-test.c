#include "main.h"

#include <stdio.h>

#include <stdlib.h>



/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)
	
{
	
	char *concat, *test2, *test3;
	

	test2 = string_nconcat("awatt", NULL, 6);
	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", test2);
	
	free(concat);
	
	return (0);
	
}
