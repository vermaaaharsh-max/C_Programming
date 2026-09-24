//To print n terms of Geometric Progression: 1,2,4,8,16,
#include <stdio.h>
int main () {
    int a =1,n;
    printf("Enter the number of terms you want to print in GP: ");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++)
    {printf("%d\n",a);
        a = a*2;
    }
    return 0;
}