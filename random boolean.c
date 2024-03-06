/*Random Boolean (true or false):*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    srand(time(NULL));
    bool randomBool = rand() % 2 == 0;
    printf("Random boolean: %s\n", randomBool ? "true" : "false");
    return 0;
}
