#include "main.h"

/**
*main- Checks for upper case letters
*
*Return: returns 1 is char is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
