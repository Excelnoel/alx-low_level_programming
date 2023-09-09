#include <stdio.h>

/**
 * main - Entry point
 *
 *This program prints the lowercase alphabet
 *followed by a new line, excluding the letters 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
