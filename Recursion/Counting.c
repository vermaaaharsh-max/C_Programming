#include <stdio.h>
void decreasing(int n,int x) {
 if (x>n) return;
    else { printf("%d\n",x);}
    decreasing(n,x+1);
    return ;
} 
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    decreasing(n,1);
    return 0;
}