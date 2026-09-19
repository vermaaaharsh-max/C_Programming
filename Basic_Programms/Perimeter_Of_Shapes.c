#include <stdio.h>
int main() {
    float length, width, radius, equal_side,perimeter;
const float pi = 3.14; //or #define PI 3.14
printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Enter the length of the equal side of the square/rhombus: ");
    scanf("%f", &equal_side);
    perimeter = 2 * (length + width);
    perimeter = 2 * pi * radius;
    perimeter = 4 * equal_side;
    printf("Perimeter of the rectangle: %f\n", perimeter);
    printf("Perimeter of the circle: %f\n", perimeter);
    printf("Perimeter of the square/rhombus: %f\n", perimeter);
    return 0;
}