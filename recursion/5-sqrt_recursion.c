#include "main.h"

/**
 *_sprt_recursion - returns the square root of a number
 *
 * @n:  radicand
 *
 * @p: partition
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	int p;

	if (n < 2)
	{
		return (n);
	}

	int f = 0;

	int c = n;

	while ( c >= f)
	{
		p = (f + c) / 2;

		if (p * p == n)
		{
			return (p);
		}

		else if (p * p < n)
		{
			f = p + 1;
		}

		else
		{
			c = p - 1;
		}
	}

	return (-1);

}
