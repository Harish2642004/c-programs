#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int min = 5, max = 15;
    int randomNumber = rand() % (max - min + 1) + min;
    printf("Random number between %d and %d: %d\n", min, max, randomNumber);

    return 0;
}
