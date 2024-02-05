#include "main.h"

/**
 * _puts - prints a strinf with a new line
 *
 * @str: pointer to string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[0]);
		str++;
	}

	_putchar('\n');
}
