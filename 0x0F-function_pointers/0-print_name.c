#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function pointer that prints a name
 * @name: name
 * @f: function pointer
 * Description: function pointer that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
