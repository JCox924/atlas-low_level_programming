#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints sum of two numbers on an array
 *
 * @a:  pointer to array
 *
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum_x = 0, sum_y = 0;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sum_x += a[i];
	}

	for (i = size - 1; i < (size *size) - 1; i += (size - 1))
	{
		sum_y += a[i];
	}

	printf("%d, %d\n", sum_x, sum_y);
}
