#include <stdio.h>
#include <string.h>
int main () {
    char str[9999];
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    int size = 0;
    int i = 0;
    while ( str[i] != '\0') {
        size++;
            i++;
    } printf("Size of string  = %d",size);
    return 0;
    
}