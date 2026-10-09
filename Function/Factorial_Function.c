#include <stdio.h>
int Factorial(int a) {
    int fact = 1;
    for (int i=1;i<=a;i++) {
        for (int j=1;j<=i;j++)
            fact = fact*j;
    } return fact ;
} 
int main() {
    int a;
    printf("Enter any positive number:");
    scanf("%d",&a);
    Factorial(a);
    printf("The Factorial of first %d numbers is %d.",a,Factorial(a));
    return 0;
}