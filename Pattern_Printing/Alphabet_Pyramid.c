#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char ch = 'A'; 

        for (int j = 1; j <= 2 * n - 1; j++) {
    
            if (j > n - i && j < n + i) {
                printf("%c", ch);
                ch++;
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }

    return 0;
}