#include <stdio.h>

int is_palindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

void find_largest_palindrome() {
    int largest_palindrome = 0;

    for (int i = 100; i < 1000; ++i) {
        for (int j = 100; j < 1000; ++j) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d\n", largest_palindrome);
        fclose(file);
    } else {
        printf("Error opening file.\n");
    }
}

int main(void) {
    find_largest_palindrome();
    return 0;
}
