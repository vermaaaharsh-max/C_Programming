#include <stdio.h>
int main() {
    int s;
    printf("Enter side of square:");
    scanf("%d",&s);
    for (int i = 1; i<=s;i++) {
        for (int j = 1;j<=s;j++) {
            printf("*");
        } printf("\n");
    }return 0;
    
}