#include <stdio.h>
int main() {
    int side1, side2, side3;
    printf("Enter the first side of the triangle: ");
    scanf("%d", &side1);
    printf("Enter the second side of the triangle: ");
    scanf("%d", &side2);
    printf("Enter the third side of the triangle: ");
    scanf("%d", &side3);
    if ((side1 + side2) > side3 && (side2 + side3) > side1 && (side3 + side1) > side2) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }
    return 0;
}