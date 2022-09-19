#include "main.h"
0;276;0c/**
 * swap_int - rests an integer to 98
 * @a: an integer
 * @b: an integer
 * Description: resets a number to 98
 */

void swap_int(int *a, int *b)
{
	int *p1;

	*p1 = *a;

	int *p2;

	*p2 = *b;

	*a = *p2;

	*b = *p1;
}
