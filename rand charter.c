/*Random Character:*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char randomChar = 'A' + rand() % 26; // Random uppercase letter
    printf("Random character: %c\n", randomChar);

    return 0;
}
