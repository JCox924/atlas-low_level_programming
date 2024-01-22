#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Assign a random number (limited range for simplicity) */
    n = 42;  /* Replace 42 with your desired random number approach */

    printf("Number: %d\n", n);

    /* Check whether the number is positive, negative, or zero */
    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");

    return (0);
}

