#include "main.h"

/**
*clear_bit - sets value of index to 0
*
*@n: pointer to number
*
*@index: index to change
*
*Return: 1 if worked, -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int submask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	submask = 1UL << index;
	*n = *n & ~submask;

	return (1);
}
