#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single-digit numbers of base 10
 *              starting from 0 to 9, followed by a new line, using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar('0' + number);
		number++;
	}

	putchar('\n');

	return (0);
}
