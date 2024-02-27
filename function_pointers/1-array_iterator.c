#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterates over an array using action function
 *
 * @array: pointer to array
 *
 * @size: size of array
 *
 * @action: pointer to function to iterate of array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action 1= NULL && size > 0)
	{

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
