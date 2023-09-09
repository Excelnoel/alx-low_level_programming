#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible different combinations
 *              of two digits in ascending order, separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit1, digit2, printed = 0;

    for (digit1 = 0; digit1 <= 8; digit1++)
    {
        for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
        {
            if (printed > 0)
            {
                putchar(',');
                putchar(' ');
            }

            putchar(digit1 + '0');
            putchar(digit2 + '0');
            printed++;
        }
    }

    putchar('\n');

    return (0);
}
