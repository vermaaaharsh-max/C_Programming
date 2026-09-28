#include <stdio.h>
int main () {
    int a,b;
    printf("Enter the base number: ");
    scanf("%d",&a);
    printf("Enter the exponent: ");
    scanf("%d",&b);
    int product =1;
    for (int i = 1;i<=b;i++) {
        product = product*a;
    } printf("%d",product);
    return 0;

}