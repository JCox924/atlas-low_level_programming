#include "main.h"

/**
 *_strstr - searches for stings in strings
 *
 * @haystack: pointer to string to search
 *
 * @needle: pointer to string to find
 *
 * Return: Needle in the haystack
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, f = 0;

	while (*haystack != '\0')
	{
		f = 1;
		for (i = 0; needle[i]; i++)
		{
			if (*(haystack + 1) != *(needle + 1))
			{
				f = 0;
				break;
			}
		}

		if (f == 1)
		{
			return (haystack);
		}

		haystack++;
	}

	return (0);
}

