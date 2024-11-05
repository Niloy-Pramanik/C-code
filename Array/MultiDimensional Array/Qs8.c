#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter the elements of matrix: \n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the maximum element with its index location
    int max = matrix[0][0];
    int min=matrix[0][0];
    int row = 0, col = 0;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
                row = i;
                col = j;
            }
            else if(matrix [i][j]<min){
                min=matrix[i][j];
                row=i;
                col=j;
            }
        }
    }

    printf("Max: %d\n", max);
    printf("Location: [%d][%d]\n", row, col);
    printf("Min: %d\n", min);
    printf("Location: [%d][%d]\n", row, col);

    return 0;
}
