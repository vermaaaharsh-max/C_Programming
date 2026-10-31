#include <stdio.h>
#include <string.h>
int main (){
    char str1[11] = "Harsh Verma";
    char str2[11];
    strcpy(str2,str1); 
    printf("%s",str2);
    return 0;
}