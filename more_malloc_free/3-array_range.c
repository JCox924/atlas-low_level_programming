#include "main.h"
#include <stdlib.h>

/**
 *_array_range  - create array of ints
 *
 *  @min: min num in array
 *
 *  @max: max num in array
 *
 *  Return: array of ints
 */

int *_array_range(int min, int max)
{
	size_t size;

	size_t i = 0;

	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = (size_t)(max - min + 1);

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		arr[i] = min + (int)i;
	}

	return (arr);
}
