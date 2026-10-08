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
    for (int j=1;j<=r;j++) {
        rfact = rfact*j;
    }
    for (int k=1;k<=n-r;k++) {
        nrfact = nrfact*k;
    }
    ncr = nfact/(rfact*nrfact);
    printf("The calculated Combination is %d",ncr);
    return 0;
    }