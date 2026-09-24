//to print AP: 4,7,10,13,...
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms you want to print in AP: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        printf("%d\n",(3*i)+1);
    }
}