#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase and uppercase alphabet
 *              followed by a new line using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowercase = 'a';
    char uppercase = 'A';

    while (lowercase <= 'z')
    {
        putchar(lowercase);
        lowercase++;
    }

    while (uppercase <= 'Z')
    {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');

    return (0);
}
