#include <stdio.h>
int main() {
    float length, width, radius, equal_side,volume, base, height;
const float pi = 3.14; //or #define PI 3.14
printf("Enter the length of the cuboid: ");
    scanf("%f", &length);
    printf("Enter the width of the cuboid: ");
    scanf("%f", &width);
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the length of the equal side of the cube: ");
    scanf("%f", &equal_side);
    printf("Enter the base of the triangular prism: ");
    scanf("%f", &base);
    printf("Enter the height of the triangular prism: ");
    scanf("%f", &height);
    volume = length * width * height;
    volume = pi * radius * radius * height;
    volume = equal_side * equal_side * equal_side;
    volume = (1.0/2) * base * height * length;
    printf("Volume of the cuboid: %f\n", volume);
    printf("Volume of the cylinder: %f\n", volume);
    printf("Volume of the cube: %f\n", volume);
    printf("Volume of the triangular prism: %f\n", volume);
    return 0;
}
