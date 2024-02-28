#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - 
 *
 * @separtor -
 *
 * @n:
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%d", va_arg(args, int));

			if (separator != NULL && i != n - 1)
			{
				printf("%d", va_arg(args, int));
				i++;
			}
			va_end(args);
		}

		printf("\n");
	}
}
