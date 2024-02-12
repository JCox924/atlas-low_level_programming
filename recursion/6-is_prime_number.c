#include "main.h"

/**
 * is_prime_number - determine if a number cases are a prime number
 * 
 * is_odd - determine of number is prime by odd divisor
 *
 * @n: number input
 *
 * @i: divisor
 *
 * Return: 1 if number is prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	if (n % 2 == 0)
	{
		return (0);
	}

	return is_odd(n, 3);
}

int is_odd(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return is_odd(n, i + 2);
}
