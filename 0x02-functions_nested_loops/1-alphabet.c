#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
