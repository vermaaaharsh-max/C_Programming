#include <stdio.h>
int main() {
    float length, width, radius, equal_side,area, base, height;
const float pi = 3.14; //or #define PI 3.14
printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Enter the length of the equal side of the square: ");
    scanf("%f", &equal_side);
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    area = (1.0/2) * base * height;
    area = (length * width);
    area =  pi * radius*radius;
    area = equal_side*equal_side;
    printf("Area of the rectangle: %f\n", area);
    printf("Area of the circle: %f\n", area);
    printf("Area of the square: %f\n", area);
    printf("Area of the triangle: %f\n", area);
    return 0;
}