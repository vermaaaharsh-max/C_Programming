#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("The absolute value of %d is %d.\n", number, number*(-1));
    } else {
        printf("The absolute value of %d is %d.\n", number, number);
    }

    return 0;
}