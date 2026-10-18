#include <stdio.h>
int main() {
    int r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of column:");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter elements:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    } printf("Elements are -\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            printf("%d ",a[i][j]);
        } printf("\n");
    } int sum = 0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            sum = sum + a[i][j];
            
        } 
    } printf("The sum of all the elements of matrix is %d.",sum);
    return 0;
}