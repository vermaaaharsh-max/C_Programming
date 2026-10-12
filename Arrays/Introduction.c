#include <stdio.h>
int main() {
    int a[5];
    for (int i=0;i<=4;i++) {
        printf("Enter element number %d:",i+1);
        scanf("%d",&a[i]); }
    printf("Your entered numbers are-\n");
   for (int j=0;j<=4;j++) {
      printf("%d ",a[j]);  
    } return 0;
}