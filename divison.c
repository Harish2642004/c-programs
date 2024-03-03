/*divison of 2 numbers*/
#include<stdio.h>

int main() {
    int a, b;
    float quotient;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (b != 0) {
        quotient = (float)a / b;
        printf("Result of %d divided by %d is %.2f\n", a, b, quotient);
    } else {
        printf("Error: Division by zero is not allowed\n");
    }

    return 0;
}
