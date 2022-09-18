#include "main.h"

int _isupper(int c)
{
	int a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c == a)
		{
			return (1);
		}
		else
		{
			continue;
		}
	}
	return (0);
}
