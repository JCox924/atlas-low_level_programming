#include "main.h"

/**
*get_bit - gets value of a bit at index
*
*@n: number to search for
*
*@index: index of bit
*
*Return: bit of index, -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
