#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = sizeof(message) - 1;

	if (write(STDERR_FILENO, message, len) != len)
	{
		return (1);
	}

	return (1);
}
