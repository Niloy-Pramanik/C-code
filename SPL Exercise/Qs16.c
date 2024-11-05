#include <stdio.h>

int main() {
    int n, m, i, j, found;
    int A[100], B[100], C[100]; // assuming maximum size of arrays is 100

    // get input for array A
    printf("Enter size of array A: ");
    scanf("%d", &n);
    printf("Enter elements of array A:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }

    // get input for array B
    printf("Enter size of array B: ");
    scanf("%d", &m);
    printf("Enter elements of array B:\n");
    for(i=0; i<m; i++) {
        scanf("%d", &B[i]);
    }

    // find difference (A-B)
    int k = 0;
    for(i=0; i<n; i++) {
        found = 0;
        for(j=0; j<m; j++) {
            if(A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            C[k] = A[i];
            k++;
        }
    }

    // print result
    printf("Result of (A-B):\n");
    for(i=0; i<k; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
