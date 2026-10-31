#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of column:");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    } 
    printf("Elements are -\n");
    int minr = 0;
    int maxr = r - 1;
    int minc = 0;
    int maxc = c - 1;
    int tne = r * c;
    int count = 0;
    while (count < tne) {
        for (int j = minc; j <= maxc; j++) {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;
        if (count >= tne) break;

        for (int i = minr; i <= maxr; i++) {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;
        if (count >= tne) break;

        for (int j = maxc; j >= minc; j--) {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;
        if (count >= tne) break;

        for (int i = maxr; i >= minr; i--) {
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}