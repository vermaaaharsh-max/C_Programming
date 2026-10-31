#include <stdio.h>
#include <string.h>
int main (){
    char str[6] = "Harsh";
    printf("Before : %s\n",str);
    for (int i=4;i>=2;i--) {
        str[i+1] = str[i];
    } str[2]='a';
    
    printf("After : %s",str);
    return 0;
}