#include <stdio.h>

int main() {
    int m, n, i, j;
    int arr[100][100]; // assuming maximum size of array is 100 x 100

    // get input for m x n array
    printf("Enter size of array (m x n): ");
    scanf("%d %d", &m, &n);
    printf("Enter %d integers for the array:\n", m*n);
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // print array row-wise
    printf("Row-wise: ");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("%d ", arr[i][j]);
        }
    }

    // print array column-wise
    printf("\nColumn-wise: ");
    for(j=0; j<n; j++) {
        for(i=0; i<m; i++) {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");

    return 0;
}
