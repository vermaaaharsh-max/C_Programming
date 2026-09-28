#include <stdio.h>
int main () {
    //1,1,2,3,5,8,13,21,34,55,89
    int n;
    printf("Enter the number of terms you want to print in Fibonacci series: ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum = 1;

    for ( int i = 1;i<=n-2;i++) {
        sum = a + b;
        a = b;
        b = sum; }
        printf("The Fibonacci series of %d terms is: %d", n, sum);
        return 0;
    }