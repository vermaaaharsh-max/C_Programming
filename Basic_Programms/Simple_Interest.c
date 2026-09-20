#include <stdio.h>
int main() {
    float p, r, t, SI;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &r);
    printf("Enter the time (in years): ");
    scanf("%f", &t);
    SI = (p * r * t) / 100;
    printf("Simple Interest: %f\n", SI);
    return 0;
}