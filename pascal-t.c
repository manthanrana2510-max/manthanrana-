#include <stdio.h>

int main() {
    int n, i, j;
    int coef = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        // Print spaces for formatting
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        coef = 1;

        // Print numbers in Pascal's Triangle
        for (j = 0; j <= i; j++) {
            printf("%d ", coef);

            // Calculate next coefficient
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}