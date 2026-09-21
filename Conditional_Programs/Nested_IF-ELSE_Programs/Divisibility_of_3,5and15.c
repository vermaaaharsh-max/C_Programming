#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 5 == 0 || number % 3 == 0) {
        if (number % 15 != 0) {
            printf("%d is divisible by 3 or 5 but not by 15.\n", number);
        } else {
            printf("%d is divisible by 15\n", number);
        }
    }
     else {
        printf("%d is not divisible by either 3 or 5.\n", number);
    }



    return 0;
}
