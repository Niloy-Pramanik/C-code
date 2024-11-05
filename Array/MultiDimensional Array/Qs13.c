#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Checking if the matrix is symmetric or not
    for(i=0; i<n; i++) {
        for(j=i; j<n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) {
            break;
        }
    }
    if(flag == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
