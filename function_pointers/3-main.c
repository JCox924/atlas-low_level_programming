#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - 
 *
 * @argc:
 *
 * @argv:
 *
 * Return:
 */

int main(int argc, char *argv[])
{
	int (*pOp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	pOp = get_op_func(argv(2));

	if (!pOp)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", pOp(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
