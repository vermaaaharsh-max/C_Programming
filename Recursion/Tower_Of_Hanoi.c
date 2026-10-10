#include <stdio.h>
void Tower(int n,char s,char h,char d) // S = Source Or Starting Rod , H = Helper Rod ,D = Destination Rod
{
    if (n==0) return ;
    Tower(n-1,s,d,h);
    printf("% c -> %c\n",s,d);
    Tower(n-1,h,s,d);
    return;
}
int main() {
    int n;
    printf("Enter Number of Disks:");
    scanf("%d",&n);
    Tower(n,'A','B','C');
    return 0;
}