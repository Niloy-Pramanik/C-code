#include <stdio.h>

int main() {
    int n, i, j, k;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print the first half of the line
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (k = 1; k <= 2*(n-i); k++) {
            printf("_");
        }
        // Print the second half of the line
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
