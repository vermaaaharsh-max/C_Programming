#include <stdio.h>
int main() {
    int size;
    printf("Enter total number of values you want to sum:");
    scanf("%d",&size);
    int a[size];
    for (int i=0;i<=(size-1);i++) {
        printf("Enter Number%d:",i+1);
        scanf("%d",&a[i]); }
    int sum = 0;
    
   for (int j=0;j<=(size-1);j++) {
       
    
     sum = sum + a[j];
     
    } printf("The total sum of the number entered is = %d.",sum);
  return 0;
}