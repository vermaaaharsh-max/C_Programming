#include <stdio.h>
void increasing(int n,int x) {
 if (x>n) return;
    else { printf("%d\n",x);}
    increasing(n,x+1);
    return ;
} 
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    increasing(n,1);
    return 0;
}