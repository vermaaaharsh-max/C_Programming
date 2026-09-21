#include <stdio.h>
int main() {
    float a, b, sum, sub, mul, div;
    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    printf("Sum of the two numbers: %f\n", sum);
    printf("Difference of the two numbers: %f\n", sub);
    printf("Product of the two numbers: %f\n", mul);
    printf("Quotient of the two numbers: %f\n", div);
    return 0;
}