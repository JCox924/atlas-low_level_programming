#include "main.h"

/**
 * reverse_array - reverses array of integers
 *
 * @a: pointer to array
 *
 * @n: # of indices in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, rv;

	for (i = 0; i < n / 2; i++)
	{
		rv = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = rv;
	}
}
