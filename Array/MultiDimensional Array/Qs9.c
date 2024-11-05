#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if(n%2==0) {
        printf("n must be odd.\n");
        return 0;
    }
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i=0; i<n; i++) {
        sum += matrix[0][i] + matrix[n-1][i];  // sum of first and last row
        if(i%2==0) {  // sum of diagonal elements
            sum += matrix[i][i] + matrix[i][n-i-1];
        }
    }
    printf("Sum of first row, last row and two diagonals without overlap is: %d\n", sum);
    return 0;
}
