#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: format spec
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0, j;
    char *str, *sep = "";
    char format_specifiers[] = {'c', 'i', 'f', 's'};

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        while (j < 4)
        {
            if (format[i] == format_specifiers[j])
            {
                printf("%s", sep);
                if (format[i] == 'c')
                {
                    char c = (char)va_arg(args, int);
                    printf("%c", c);
                }
                else if (format[i] == 'i')
                {
                    printf("%d", va_arg(args, int));
                }
                else if (format[i] == 'f')
                {
                    printf("%f", va_arg(args, double));
                }
                else if (format[i] == 's')
                {
                    str = va_arg(args, char *);
                    if (str == NULL)
                    {
                        str = "(nil)";
                    }
                    printf("%s", str);
                }
                sep = ", ";
                break;
            }
            j++;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}
