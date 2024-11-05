#include <stdio.h>

int main() {
    int n, i, j, k;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == n-i+1 || j == i || j == n/2+1 || i == n/2+1) {
                printf("$");
            }
            else {
                printf("_");
            }
        }
        printf("\n");
    }

    return 0;
}
