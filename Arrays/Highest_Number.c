#include <stdio.h>
int main() {
    int size;
    printf("Enter total number of values you want to compare:");
    scanf("%d",&size);
    int a[size];
    for (int i=0;i<=(size-1);i++) {
        printf("Enter Number%d:",i+1);
        scanf("%d",&a[i]); }
    
    int max = a[0];
   for (int j=0;j<=(size-1);j++) {
       if (max<a[j]){
           max = a[j];
       }
     
    } printf("The highest number among all the number is = %d.",max);
  return 0;
}