#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows/columns: ");
    scanf("%d", &n);
    
    int a[n][n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    
    for (int i = 0; i < n; i++) {
        int j = 0;
        int k = n - 1;
        while (j < k) {
            int temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
            j++;
            k--;
        }
    }
    
    printf("After rotation (By 90 degrees clockwise) -\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}