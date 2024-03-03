#include <stdio.h>

int is_palindrome(int num) {
    int rev_num = 0, rem;
    int orig_num = num;

    while (num > 0) {
        rem = num % 10;
        rev_num = rev_num * 10 + rem;
        num /= 10;
    }

    if (rev_num == orig_num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, i, score;

    printf("Enter the number of participants: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid Input\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter the score of participant %d: ", i+1);
        scanf("%d", &score);

        if (is_palindrome(score)) {
            printf("Winner\n");
        } else {
            printf("Looser\n");
        }
    }

}
