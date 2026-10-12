#include <stdio.h>
int main() {
    int size;
    printf("Enter total number of values you want to product:");
    scanf("%d",&size);
    int a[size];
    for (int i=0;i<=(size-1);i++) {
        printf("Enter Number%d:",i+1);
        scanf("%d",&a[i]); }
    int mul = 1;
    
   for (int j=0;j<=(size-1);j++) {
       
    
     mul = mul * a[j];
     
    } printf("The total product of the number entered is = %d.",mul);
  return 0;
}