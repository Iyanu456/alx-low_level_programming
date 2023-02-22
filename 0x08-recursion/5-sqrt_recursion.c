#include "main.h"
#include "string.h"
#include <math.h>
/**
 * _sqrt_recursion - calculates the square root of n
 * @n: an integer
 * Description: calculates the square root of n
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int sqrt_search(int start, int end, int value)
	{
		if (end * end == value)
		{
			return (end);
		}
		else if (end * end > value)
		{
		int mid, m_square;

		mid = (start + end) / 2;
		m_square = mid * mid;
		if (m_square == value)
		{
			return (mid);
		}
		else if (m_square - value <= 0.001)
		{
			return (mid);
		}
		else if (m_square < value)
		{
			return (sqrt_search(start, mid + 1, value));
		}
		else if (m_square > value)
		{
			return (sqrt_search(mid - 1, end, value));
		}
		}
		else if (end * end < n)
		{
			sqrt_search(start + 1, end + 1, value);
		}
	}
	int i;

	i = 0;
	return (sqrt_search(i, i + 1, n));
}
