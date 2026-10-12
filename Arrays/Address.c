#include <stdio.h>
int main() {
    int a[5] = {0,1,2,3,4};
  for (int i=0;i<=4;i++) {
    printf("Address of element %d is %p\n",i+1,&a[i]);
  } return 0;
}