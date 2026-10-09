#include <stdio.h>
int star(int n) {
    if (n==1 || n==2 )return n;
    return star(n-1) + star(n-2);
        }
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    star(n);
    printf("To reach %dth stair , we have %d ways.",n,star(n));
    return 0;
}