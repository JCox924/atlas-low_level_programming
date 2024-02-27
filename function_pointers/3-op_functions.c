#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add number
 *
 * @a: number
 *
 * @b: number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts numbers
 *
 * @a: number
 *
 * @b number
 *
 * Return: sum
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipies
 *
 * @a: number
 *
 * @b: number
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 *
 * @a: number
 *
 * @b: number
 *
 * Return: product
 */

int op_div(int a, int b)
{
	 if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
	return (a / b);
}

/**
 * op_mod - modulus
 *
 * @a: number
 *
 * @b: number
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

