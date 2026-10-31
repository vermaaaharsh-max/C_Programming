#include <stdio.h>
#include <string.h>
int main (){
    char str1[99] = "Harsh";
    char str2[]= " Verma";
    strcat(str1,str2); 
    printf("%s",str1);
    return 0;
}