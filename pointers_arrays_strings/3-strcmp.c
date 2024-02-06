#include "main.h"

/**
 * _strcmp - compares two strings data size
 *
 * @s1: pointer to string 1
 *
 * @s2: pointer to string 2
 *
 * Return: difference between the two strings, 0 if they're the same
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
