#include <stdio.h>
int main() {
    int size;
    printf("Enter total number on which you want to perform the operation:");
    scanf("%d",&size);
    int a[size];
    for (int i=0;i<=(size-1);i++) {
        printf("Enter Number%d:",i+1);
        scanf("%d",&a[i]); }
    
   for (int j=0;j<=(size-1);j++) {
       if (a[j]%2 != 0){ 
           a[j] = a[j]*2;
       } else {a[j] = a[j] + 10;}
     printf("%d\n",a[j]);
   }
  return 0;
}