#include "main.h"

/**
*flip_bits - returns number of nits to filp from one number to another
*
*@n: #1
*
*@m: #2
*
*Return: number of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor > 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
