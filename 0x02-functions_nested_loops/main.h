#include <unistd.h>
/**
 * putchar - putchar prototype
 * Description: outputs a string
 * Return: 0
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
