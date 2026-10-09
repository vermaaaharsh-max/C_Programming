#include <stdio.h>
int stair(int n) {
    if (n==1 || n==2 )return n;
    return stair(n-1) + stair(n-2);
        }
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    stair(n);
    printf("To reach %dth stair , we have %d ways.",n,stair(n));
    return 0;
}