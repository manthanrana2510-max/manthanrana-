#include <stdio.h>

int main() {
    int a[2][2], b[2][2], sum[2][2];

    // Input first matrix
    printf("Enter elements of first 2x2 matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 2x2 matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display resultant matrix
    printf("Resultant matrix after addition:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}