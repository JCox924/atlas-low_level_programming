#include "main.h"
#include <stdio.h>

/**
 * main - prints arguments
 *
 * @argc: argument counter
 *
 * @argv: argument string pointer
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
