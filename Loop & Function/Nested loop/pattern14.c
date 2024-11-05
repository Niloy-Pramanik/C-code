#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print the top and bottom rows
        if (i == 1 || i == n) {
            for (j = 1; j <= n; j++) {
                printf("*");
            }
            printf("\n");
        }
        // Print the middle rows
        else {
            for (j = 1; j <= n; j++) {
                if (j == 1 || j == n) {
                    printf("*");
                }
                else {
                    printf("_");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
