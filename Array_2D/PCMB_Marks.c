#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of students:");
    scanf("%d", &r);
    
    int a[r][4];
    
    for (int i = 0; i < r; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Their marks are-\n");
    for (int i = 0; i < r; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}