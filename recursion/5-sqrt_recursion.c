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
	int p = (n / 2) + (n % 2);

	if (n < 2)
	{
		return (n);
	}

	if (p * p == n)
	{
		return (p);
	}
	else if (p * p < n)
	{
		return (_sqrt_recursion(n + p * p));
	}
	else
	{
		return (_sqrt_recursion(p - 1));
	}
}
