#include "main.h"

/**
 * _strchr - locates a certain character in string
 *
 * @s: pointer to string
 *
 * @c: character to find
 *
 * Return: pointer to first occurance in string
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}

	return (s[i] == c ? (s + i) : '\0');
}
