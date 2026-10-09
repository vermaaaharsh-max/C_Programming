#include <stdio.h>
void sum(int x,int n) {
    if (n==0) {
        printf("The sum is : %d",x);
        return;
    } else sum(x+n,n-1);
    return ;
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    sum(0,n);
    return 0;
}