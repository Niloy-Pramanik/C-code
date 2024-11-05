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
        for(j=0; j<n; j++) {
            if(i==0 || j==0 || i==n-1 || j==n-1 || i==j || i+j==n-1) {
                sum += matrix[i][j];  // sum of boxed positions
            }
        }
    }
    printf("Sum of integers in boxed positions is: %d\n", sum);
    return 0;
}
