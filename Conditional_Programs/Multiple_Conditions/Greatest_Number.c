#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter first Number: ");
    scanf("%d", &num1);
    printf("Enter second Number: ");
    scanf("%d", &num2);
    printf("Enter third Number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("num1 = %d is the greatest number.\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("num2 = %d is the greatest number.\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("num3 = %d is the greatest number.\n", num3);
    }
    else if (num1 == num2 && num1 > num3) {
        printf("num1 = %d and num2 = %d are the greatest numbers.\n", num1, num2);
    } else if (num1 == num3 && num1 > num2) {
        printf("num1 = %d and num3 = %d are the greatest numbers.\n", num1, num3);
    } else if (num2 == num3 && num2 > num1) {
        printf("num2 = %d and num3 = %d are the greatest numbers.\n", num2, num3);
    } else {
        printf("All three numbers are equal.\n");
    }
    return 0;
}