#include "main.h"

/**
 *print_numbers- Prints numbers 0-9 using a while loop
 *
 *
 *@i: Iterator variable to store the character
 *
 *
 *
*/

void print_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}	
	_putchar('\n');
}
