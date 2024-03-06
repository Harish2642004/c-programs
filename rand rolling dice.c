/*Simulate rolling a six-sided die*/
#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int diceRoll = rand() % 6 + 1;

    printf("Die roll result: %d\n", diceRoll);
    return 0;
}
