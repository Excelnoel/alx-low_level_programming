#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program generates a random number and checks if it's positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(NULL)); /* Seed the random number generator with the current time */
    n = rand() % 201 - 100; /* Generate a random number between -100 and 100 */

    printf("%d ", n); // Print the number

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return (0);
}
