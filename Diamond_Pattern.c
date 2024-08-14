#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    if (rows % 2 == 0) {
        printf("Number of rows should be an odd number.\n");
        return 1;
    }

    int n = rows / 2 + 1;  
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

