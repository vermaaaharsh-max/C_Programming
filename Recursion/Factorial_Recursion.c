#include <stdio.h>
int Factorial(int n) {
    if (n==0 || n==1) return 1;
    else  return n * Factorial(n-1);
    } 

int main() {
    int n;
    printf("Enter any positive number:");
    scanf("%d",&n);
    Factorial(n);
    printf("The Factorial of first %d numbers is %d.",n,Factorial(n));
    return 0;
}