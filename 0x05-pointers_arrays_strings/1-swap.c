#include "main.h"
/**
 * swap_int - rests an integer to 98
 * @a: an integer
 * @b: an integer
 * Description: resets a number to 98
 */

void swap_int(int *a, int *b)
{
	int *p, *d;

	p = 0;
	d = 0;

	*p = *a;

	*d = *b;

	*a = *d;

	*b = *a;
}
