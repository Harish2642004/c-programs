/*multiplication of two numbers*/
#include<stdio.h>

int main() {
    int a, b, product;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    product = a * b;

    printf("Product of %d and %d is %d\n", a, b, product);

    return 0;
}

