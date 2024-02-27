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

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
