#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the lowercase alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
