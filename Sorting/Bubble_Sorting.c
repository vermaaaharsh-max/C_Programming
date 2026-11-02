#include <stdio.h>
int main() {
    int arr[5] = {5,4,3,2,1};
    int n=5;
    printf("Before sorting:\n");
    for (int i=0;i<n;i++) {
        printf("%d",arr[i]);
    } 
    //bubble sort
    for (int i=0;i<n-1;i++){
        for (int j=0;j<=n-2;j++) {
            if (arr[j]>arr[j+1]) {
                int temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    } printf("\nAfter sorting:\n");
    for (int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    return 0;
}