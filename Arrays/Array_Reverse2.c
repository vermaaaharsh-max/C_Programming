#include <stdio.h>
void rev(int a[]) {
    int i =0;
    int j=6;
    int temp;
    while (i<j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    } return;
}
int main() {
    int a[7] = {1,2,3,4,5,6,7};
    rev(a);
    for (int i = 0;i<=6;i++) {
        printf("%d",a[i]);
    }
    return 0;
}