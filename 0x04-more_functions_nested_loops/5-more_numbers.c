#include "main.h"
/**
 * more_numbers - prints some numbers
 * Description: prints some numbers
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		int b;

		for (b = '0'; b <= '9'; b++)
		{
			_putchar (b);

			if (b == '9')
			{
				int c;

				for (c = '0'; c <=v'4'; c++)
				{
					_putchar('1' + (c));
				}
		}
		_putchar ('\n');
	}
}
