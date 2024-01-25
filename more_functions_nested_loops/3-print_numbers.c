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
	i = 0;
	while (i < 10)
	{
		_putchar(i);
	}
	_putchar('\n');
	i++;
	
}
