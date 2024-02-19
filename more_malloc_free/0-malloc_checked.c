#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory but exits if NULL
 *
 *  @b: size of mem to alloc
 *
 *  Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return p;
}
