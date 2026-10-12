#include <stdio.h>
int main() {
    int size;
    printf("Enter total number of values you want to compare:");
    scanf("%d",&size);
    int a[size];
    for (int i=0;i<=(size-1);i++) {
        printf("Enter Number%d:",i+1);
        scanf("%d",&a[i]); }
    
    int min = a[0];
   for (int j=0;j<=(size-1);j++) {
       if (min>a[j]){
           min = a[j];
       }
     
    } printf("The minimum number among all the number is = %d.",min);
  return 0;
}