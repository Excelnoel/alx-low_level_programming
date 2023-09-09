#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;
    
    srand((unsigned)time(NULL)); // Seed the random number generator with the current time
    n = rand() % (2 * RAND_MAX + 1) - RAND_MAX; // Generate a random number between -RAND_MAX and RAND_MAX
    
    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive\n");
    } else if (n == 0) {
        printf("zero\n");
    } else {
        printf("negative\n");
    }

    return 0;
}
