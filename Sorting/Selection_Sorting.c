#include <stdio.h>
#include <limits.h>

int main() {
    int arr[7] = {7,6,5,4,3,2,1};
    int n = 7;

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Selection sort
    for (int i = 0; i < n-1; i++) {
        int min = INT_MAX;
        int minidx = -1;

        for (int j = i; j < n; j++) {
            if (min > arr[j]) {
                min = arr[j];
                minidx = j;
            }
        }

        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }

    printf("\nAfter sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}