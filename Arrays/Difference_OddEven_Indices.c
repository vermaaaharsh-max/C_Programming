#include <stdio.h>
int main() {
    int size;
    printf("Enter total number on which you want to perform the operation:");
    scanf("%d",&size);
    int a[size];
    int sum = 0;
    int add = 0;
    for (int i=0;i<=(size-1);i++) {
        printf("Enter Number%d:",i+1);
        scanf("%d",&a[i]); }
    
   for (int j=0;j<=(size-1);j++) {
       if (j%2 != 0){ 
         sum = sum + a[j]  ;
       } else { add = add + a[j];}
     
   } printf("Difference between sum of element at even indices to the sum of elements at odd indices = %d\n",add-sum);
  return 0;
}