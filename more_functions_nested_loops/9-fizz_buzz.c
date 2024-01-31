#include <stdio.h>
#include <stdlib.h>

/**
 * main- print fizzbuzz, fizz, and bizz and multiples
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	
	{
		if ( i % 3 == 0 && i % 5 == 0)

		{
			printf("Fizzbuzz");
		}
		else if (i % 3 == 0)

		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		
		{
			printf("Buzz");
		}
		else

		{
			printf("%d " , i);
		}
	}
}

