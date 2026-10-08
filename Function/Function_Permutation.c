#include <stdio.h>
int factorial(int x) {
  int fact = 1;
  for (int i=1;i<=x;i++) {
    fact = fact*i;
      
  } return fact;}
  int main() {
  int n,r,ncr;
  printf("Enter number n:");
  scanf("%d",&n);
  printf("Enter number r:");
  scanf("%d",&r);
  
  ncr= factorial(n)/factorial(n-r);
  printf("The permutation is %d",ncr);
  return 0;
}