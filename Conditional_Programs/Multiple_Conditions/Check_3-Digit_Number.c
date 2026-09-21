#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 99 && number < 1000 || number < -99 && number > -1000) {
        printf("%d is a 3-digit number.\n", number);
    } else {
        printf("%d is not a 3-digit number.\n", number);
    }

    return 0;
}