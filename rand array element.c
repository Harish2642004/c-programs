/*Random Array Element:*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int array[] = {10, 20, 30, 40, 50};
    int randomIndex = rand() % (sizeof(array) / sizeof(array[0]));
    printf("Random array element: %d\n", array[randomIndex]);

    return 0;
}
