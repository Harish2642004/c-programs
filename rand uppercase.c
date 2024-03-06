/*Generate a random uppercase letter:*/
#include <stdio.h>
#include <stdlib.h>

int main()
 {
    char randomLetter = 'A' + rand() % 26;

    printf("Random uppercase letter: %c\n", randomLetter);
    return 0;
}
