#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int m, n, matrix[MAX_SIZE][MAX_SIZE];
    scanf("%d %d", &m, &n);
    // Read the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Replace duplicates with -1
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int duplicate = 0;
            for (int k = 0; k < j; k++) {
                if (matrix[i][k] == matrix[i][j]) {
                    duplicate = 1;
                    break;
                }
            }
            if (duplicate) {
                matrix[i][j] = -1;
            }
        }
    }
    // Display the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
