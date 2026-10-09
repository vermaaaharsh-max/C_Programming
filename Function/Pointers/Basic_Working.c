#include <stdio.h>
int main() {
    int a=10;
    int* x=&a;
    printf("Value of a: %d\n",a);
    printf("Address of  a is %p \n",&a);
    printf("Value of x or address of a is : %p\n",x);
    printf("Value pointed by x: %d\n",*x);
    return 0;
}