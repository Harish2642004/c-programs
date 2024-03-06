/*Coin Flip (0 or 1):*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int coin = rand() % 2;
    printf("Coin flip result: %s\n", coin == 0 ? "Heads" : "Tails");

    return 0;
}
