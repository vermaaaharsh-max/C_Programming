#include <stdio.h>

int main() {
 float x1,y1,x2,y2,x3,y3,m1,m2;
    printf("Enter x1 - coordinate:");
    scanf("%f",&x1);
    printf("Enter y1 - coordinate:");
    scanf("%f",&y1);
    printf("Enter x2 - coordinate:");
    scanf("%f",&x2);
    printf("Enter y2 - coordinate:");
    scanf("%f",&y2);
    printf("Enter x3 - coordinate:");
    scanf("%f",&x3);
    printf("Enter y3 - coordinate:");
    scanf("%f",&y3);
    if ((x2-x1) == 0 && (x3-x2) == 0) { printf("Point lies on same line");}
        else if ((x2-x1)==0 || (x3-x2)==0) { printf("Points doesn't lie on same line.");}
    else {
        m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
           if (m1==m2){ printf("Hence they are having equal slope.\n They are lying on same line.\n");}
    else { printf("As they dont have an equal slope.\nThey are not lying on same line.");}}
    return 0;
}