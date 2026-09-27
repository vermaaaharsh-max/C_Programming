#include <stdio.h>
int main () {
    int n;
    printf("Enter a number to sum it's digits: ");
    scanf("%d",&n);
    int sum = 0;
    int ld = 0;
    while(n>0) {
        ld = n % 10;
    sum = sum + ld;
    n = n / 10;
    }
    printf("Sum of digits of the entered number: %d\n", sum);
    return 0;
}