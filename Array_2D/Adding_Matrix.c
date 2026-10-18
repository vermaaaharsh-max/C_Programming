#include <stdio.h>
int main() {
    int r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of column:");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter elements of first Matrix:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    } 
    printf("Enter elements of second Matrix:\n");
    int b[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    } 
    int result[r][c];
    printf("Resultant Matrix:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            result[i][j] = a[i][j] + b[i][j]; 
            printf("%d ",result[i][j]);
        }
        printf("\n");
    } 

    return 0;
}