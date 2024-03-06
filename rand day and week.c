/*Randomly Select a Day of the Week:*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    const char *daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int randomIndex = rand() % 7;

    printf("Random day of the week: %s\n", daysOfWeek[randomIndex]);

    return 0;
}
