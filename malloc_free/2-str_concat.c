#include "main.h"
#include "stdlib.h"

/**
 * _strlen - returns the lengths of a string
 *
 * @s: pointer to string variable
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	char *i = s;

	while (*s != '\0')
	{
		++s;
	}
	return (s - i);
}

/**
 *
 * str_concat - Concatenates 2 strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: Conatenated string
 */

char *str_concat(char *s1, char *s2)
{


	char *result;

	size_t len_s1 = (s1 == NULL) ? 0 : _strlen(s1);

        size_t len_s2 = (s2 == NULL) ? 0 : _strlen(s2);

	size_t i, j;

	result = (char *)malloc(len_s1 + len_s2 + 1);

	if (result == (NULL))
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		result[len_s1 + j] = s2[j];
	}

	result[len_s1 + len_s2] = '\0';

	return (result);
}
