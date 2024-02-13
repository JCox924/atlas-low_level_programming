#include "main.h"

/**
 * multiply - Multiplies two numbers
 *
 * @num1: The first number
 *
 * @num2: The second number
 *
 * Return: The result of the multiplication
 */

int multiply(int num1, int num2)
{
    int result = 0;

    while (num2 > 0)
    {
        result += num1;
        num2--;
    }

    return (result);
}

/**
 * main - Entry point
 *
 * @argc: The number of command-line arguments
 *
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        write(2, "Error\n", 6);
        return (1);
    }

    int num1 = 0, num2 = 0;

    int i;

    for (i = 0; argv[1][i] != '\0'; i++)
    {
        num1 = num1 * 10 + (argv[1][i] - '0');
    }

    for (i = 0; argv[2][i] != '\0'; i++)
    {
        num2 = num2 * 10 + (argv[2][i] - '0');
    }

    int result = multiply(num1, num2);

    i = 0;

    char buffer[12];

    while (result > 0)
    {
        buffer[i++] = result % 10 + '0';
        result /= 10;
    }

    while (--i >= 0)
    {
        write(1, &buffer[i], 1);
    }

    write(1, "\n", 1);

    return (0);
}
