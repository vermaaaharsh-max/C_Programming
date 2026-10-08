#include <stdio.h>
int main() {
int n,r;
printf("Enter number n:");
scanf("%d",&n);
    printf("Enter number r: ");
    scanf("%d",&r);
    int nfact = 1;
    int rfact = 1;
    int nrfact=1;
    int ncr;
    for (int i=1;i<=n;i++) {
        nfact = nfact*i;
    }
    
    for (int k=1;k<=n-r;k++) {
        nrfact = nrfact*k;
    }
    ncr = nfact/nrfact;
    printf("The calculated Permutation is %d",ncr);
    return 0;
}