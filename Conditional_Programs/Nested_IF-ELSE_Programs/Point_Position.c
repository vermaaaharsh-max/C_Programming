#include <stdio.h>

int main() {
  int x,y;
    printf("Enter x-coordinate: ");
    scanf("%d",&x);
    printf("Enter y-coordinate: ");
    scanf("%d",&y);
    if (x==0 && y != 0)
    { printf("Point lies on y-axis.");}
    else if (y==0 && x !=0){
        printf("Point lies on x-axis.");
    }
    else if (y==0 && x==0){
        printf("Point lies at the origin.");
    }
    else { printf("Point lies neither on x-axis nor y-axis .");}
    return 0;
}