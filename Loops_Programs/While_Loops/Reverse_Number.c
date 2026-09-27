#include <stdio.h>
int main () {
    int n;
    printf("Enter a number to sum it's digits: ");
    scanf("%d",&n);
    int r = 0;
    int ld = 0;
    while(n>0) {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    printf("Reversed number: %d\n", r);
    return 0;
}