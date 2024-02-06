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
	int len = 0, i;

	char string[500];

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
		string[i] = s[i];
	}

	for (i = 0; i < len; i++)
	{
		s[i] = string[len - i - 1];
	}

}


