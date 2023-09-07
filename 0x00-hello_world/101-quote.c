#include <unistd.h>

int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t n;

    n = write(2, message, 59); // 59 is the length of the message
    if (n == -1) {
        return 1;
    }

    return 1;
}
