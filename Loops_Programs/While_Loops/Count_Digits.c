#include <stdio.h>
int main () {
    int n;
    printf("Enter a number to count its digits: ");
    scanf("%d",&n);
    int count = 0;
    while (n>0) {
        n = n/10;
        count++;
    } 
    printf("Number of digits in the entered number: %d\n", count);
    return 0;
}