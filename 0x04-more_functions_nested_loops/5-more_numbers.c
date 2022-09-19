#include "main.h"
/**
 * more_numbers - prints some numbers
 * Description: prints some numbers
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 10; b <= 14; b++)
		{
			_putchar (a);

			if (b > 9);
			{
				_putchar((b / 10) + '0');
			}
			{
				_putchar((b % 10) + '0');
			}
		}
		_putchar (10);
	}
}
