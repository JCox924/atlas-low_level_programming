#include <stdio.h>
#include "main.h"

/**
*more_number- Prints numbers 0-14 10x
*
*
*
*/


void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int digit;

		for (digit = 0; digit < 15; digit++)
		{
			if (digit > 9)
			{
				_putchar((digit / 10) + '0');
			}
			_putchar((digit % 10) + '0');
		}
	_putchar('\n');
	}
}
