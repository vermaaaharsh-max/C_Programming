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
    } 
    printf("Elements are -\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            printf("%d ",a[i][j]);
        } 
        printf("\n");
    } 
    int max = a[0][0];
    int max_r = 0;
    int max_c = 0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (max<a[i][j]){
                max = a[i][j]; 
                max_r = i;
                max_c = j;
            } 
        } 
    } 
    printf("The highest value among all the elements is %d at location row %d, column %d.",max,max_r,max_c);
    return 0;
}