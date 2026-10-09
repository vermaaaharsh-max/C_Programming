#include <stdio.h>
void decreasing(int n,int x) {
 if (x>n) return;
    else 
    decreasing(n,x+1);
    { printf("%d\n",x);}
    return ;
} 
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    decreasing(n,1);
    return 0;
}