#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 *  @nmemb:
 *
 *  @size:
 *
 *  Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;

	size_t size_all;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	size_all = nmemb * size;

	void *p = malloc(size_all);

	if (p == NULL)
	{
		return (NULL);
	}
	for (; i < size_all; i++)
	{
		*((char *)p + 1) = 0;
	}

	return (p);
}
