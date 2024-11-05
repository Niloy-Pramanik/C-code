#include <stdio.h>

int main() {
    int i, j, k;
    int A[3][3], B[3][3], C[3][3];
    printf("Enter the elements of matrix A: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply the matrices A and B to create C
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            C[i][j] = 0;
            for(k=0; k<3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The elements of matrix C = A * B are: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
