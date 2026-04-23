#include <stdio.h>

int main() {
    int n = 7; // size (should be odd and >= 5)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // Conditions to print '*'
            if (
                i == 0 && j >= n/2 ||          // top horizontal right
                j == n-1 && i <= n/2 ||        // right vertical top
                i == n/2 ||                    // middle horizontal
                j == 0 && i >= n/2 ||          // left vertical bottom
                i == n-1 && j <= n/2           // bottom horizontal left
            ) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
