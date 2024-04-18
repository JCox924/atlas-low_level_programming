#include "search_algos.h"

/**
*print_array - Helper func to print the current subarray
*
*@array: The array to print
*
*@left: the starting index of subarray
*
*@right: end of subarray
*
*Return: void
*/

void print_array(int *array, size_t left, size_t right)
{
	size_t i;
	
	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
*binary_search - search for value using binary searching algorithm
*
*@array: pointer to init element of array
*
*@size: number of elements int the array
*
*@value: value to match
*
*Return: index of matched value, -1 if error
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
