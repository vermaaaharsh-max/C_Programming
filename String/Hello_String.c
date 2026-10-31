#include <stdio.h>
#include <string.h>
int main () {
    char str[40];
    printf("Enter your name:");
    scanf("%[^\n]s",str);
    printf("Hello %s",str);
    return 0;
    
}