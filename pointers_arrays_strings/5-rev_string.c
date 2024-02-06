#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;

	char string[100];

	while (s[i] != '\0')
	{
		len++;
		string[i] = s[i];
		i++;
	}

	while (i < len)
	{
		s[i] = string[len - i - 1];
		i++;
	}
}


