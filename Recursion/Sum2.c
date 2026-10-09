#include <stdio.h>
int Sum(int n) {
    if (n==0 || n==1) return n;
    else  return n + Sum(n-1);
    } 

int main() {
    int n;
    printf("Enter any positive number:");
    scanf("%d",&n);
    Sum(n);
    printf("The sum of first %d numbers is %d.",n,Sum(n));
    return 0;
}