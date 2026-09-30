#include <stdio.h>
int main () {
    int r,c;
    printf("Enter row of rectangle:");
    scanf("%d",&r);
    printf("Enter column of rectangle:");
    scanf("%d",&c);
    for ( int i = 1; i<=r;i++) {
        for (int j=1;j<=c;j++) {
            printf("*");
        } printf("\n");
    }return 0;
}