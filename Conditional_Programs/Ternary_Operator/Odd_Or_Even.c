#include <stdio.h>
int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    num%2 == 0 ? printf("It's an Even Number.") : printf("It's an Odd Number.");
    return 0;
}