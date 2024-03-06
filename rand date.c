/*Random Date in a Range:*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Date {
    int day, month, year;
};

void generateRandomDate(struct Date *randomDate) {
    randomDate->day = rand() % 31 + 1;
    randomDate->month = rand() % 12 + 1;
    randomDate->year = rand() % (2024 - 2000 + 1) + 2000;
}

int main() {
    srand(time(NULL));
    struct Date randomDate;

    generateRandomDate(&randomDate);

    printf("Random date: %02d/%02d/%04d\n", randomDate.day, randomDate.month, randomDate.year);

    return 0;
}
