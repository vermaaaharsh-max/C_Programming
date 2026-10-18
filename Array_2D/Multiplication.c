#include <stdio.h>
int main() {
    int m,n;
    printf("Enter number of rows of Matrix A:");
    scanf("%d",&m);
    printf("Enter number of columns of Matrix A:");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter elements:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        } }
        int p,q;
    printf("Enter number of rows of Matrix B:");
    scanf("%d",&p);
    printf("Enter number of columns of Matrix B:");
    scanf("%d",&q);
    int b[p][q];
    printf("Enter elements:\n");
    for (int i=0;i<p;i++){
        for (int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        } }
        if (n!=p) {
            printf("These Matrix can't be multiplied.");
        }
        else {
            int r[m][q];
            for (int i = 0;i<m;i++) {
                for (int j=0;j<q;j++) {
       r[i][j]=0;
    for (int k=0;k<n;k++) {
        r[i][j] = r[i][j] + (a[i][k]*b[k][j]);
        
    } }
        
            }
    printf("Multiplication of Matrix A and Matrix B is-\n");
    for (int i=0;i<m;i++) {
        for (int j=0;j<q;j++) {
            printf("%d ",r[i][j]);
        } printf("\n");
    } } return 0;
}