#include <stdio.h>
int main() {
    int size;
    printf("Enter total number of students in class:");
    scanf("%d",&size);
    int a[size];
    for (int i=0;i<=(size-1);i++) {
        printf("Enter Roll No.-%d Marks:",i+1);
        scanf("%d",&a[i]); }
    printf("Roll Number of students who scored less than 35 -\n");
   for (int j=0;j<=(size-1);j++) {
       if (a[j]<35) {
      printf("Roll No.-%d scored %d marks.\n",j+1,a[j]);  }
    } return 0;
}