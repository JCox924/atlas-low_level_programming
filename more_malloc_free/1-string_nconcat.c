#include "main.h"
#include <stdlib.h>


/**
 * _strlen - returns the lengths of a string
 *
 * @s: pointer to string variable
 *
 * Return: length of string
 */

unsigned int _strlen(char *s)
{
	char *i = s;

	while (*s != '\0')
	{
		++s;
	}
	return (s - i);
}


/**
 *string_nconcat  - returns a string of 2 concatenated strings
 *
 *  @s1: pointer to string 1
 *
 *  @s2: pointer to string 2
 *
 *  @n: number of bytes to init
 *
 *  Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	
	unsigned int i, j;

	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);

	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	result = malloc((len1 + n + 1) * sizeof(char));

	if ((result) = NULL)
	{
		return(NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for(j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}

