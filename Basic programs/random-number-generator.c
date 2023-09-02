#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print 5 random numbers
    for (int i = 0; i < 5; i++) {
        int random_number = rand();
        printf("Random number %d: %d\n", i + 1, random_number);
    }

    return 0;
}
