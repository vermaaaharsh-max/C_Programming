#include <stdio.h>
int min(int a,int b) {
    if (a<b) return a;
    else return b;
} 
int gcd (int a, int b) {
    for (int i=min(a,b);i>=1;i--) {
        
        if ( a%i==0 && b%i==0)
            return i;
          break;
    } 
}
int main() {
    int a,b;
    printf("Enter two numbers to find GCD or HCF: ");
    scanf("%d %d",&a,&b);
    gcd(a,b);
    printf("GCD or HCF of %d and %d is: %d\n",a,b,gcd(a,b));
    return 0;
}