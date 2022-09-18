#include "main.h"
/**
 * more_numbers - prints some numbers
 * Description: prints some numbers
 */
void more_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		int b;

		for (b = 0; b <= 14; b++)
		{
			_putchar (b);
	}
	_putchar ('\n');
}
