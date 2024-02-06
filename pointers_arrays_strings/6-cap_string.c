#include "main.h"

/**
 * cap_string - capatilzes words in a string by word
 *
 * @str: poimter to string
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	for (i + 0; str[i] != '\0'; i++)
	{
		switch(str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
		}
	}
}
