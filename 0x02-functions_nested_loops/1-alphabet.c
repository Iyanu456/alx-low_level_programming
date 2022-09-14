#included " main.h"
/**
 * alphabet - prints all alphabets
 * Decription: prints all lower case alphabets
 * Return: null
 */
void print_alphabet(void)
{
	int i;

	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
