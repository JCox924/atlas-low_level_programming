#include "search_algos.h"

/**
*linear_search - Searches for a value using the linear search algorithm.
*
*@array: pointer to first element of an array
*
*@size: Number of elements in the array
*
*@value: value to match in search
*
*Return: The index in which the value is located, -1 if error
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu) = [%d}\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
