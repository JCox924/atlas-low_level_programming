#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of size char in bytes
 *
 * @size: size of array
 *
 * @c: character
 *
 * Return: NULL if size is 0, pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		array[i] = c;
	}

	return (array);

	free(array);
}
