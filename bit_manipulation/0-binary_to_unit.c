#include "main.h"

/**
*binary_to_uint - coverts base2 to base10(int)
*
*@b: pointer to string of 0 and 1
*
*Return: coverted int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '0' || *b == '1');
		{
			num <<= 1;
			num += *b - '0';
		}
		else
		{
			return (0);
		}
		b++
	}
	return (num);
}
