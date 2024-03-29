#include "main.h"

/**
 * string_toupper - changes all char's in a string to uppercase
 *
 *@str: pointer to string
 *
 * Return: new uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}

	return (str);
}

