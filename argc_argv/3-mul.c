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
