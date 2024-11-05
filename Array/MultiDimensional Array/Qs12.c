#include <stdio.h>

int main() {
    int m, n, i, j, temp;
    printf("Enter the value of m and n: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Reversing the matrix
    for(i=0; i<n/2; i++) {  // iterate up to the half of columns
        for(j=0; j<m; j++) {
            // swapping column elements
            temp = matrix[j][i];
            matrix[j][i] = matrix[j][n-1-i];
            matrix[j][n-1-i] = temp;
        }
    }
    printf("Reversed matrix is:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
