#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer in an array
 *
 * @array: pointer to array to search
 *
 * @size: size of array
 *
 * @cmp: pointer to comparsion function
 *
 * Return: integer specified, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}

	return (-1);
}
