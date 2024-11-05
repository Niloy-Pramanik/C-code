#include <stdio.h>

int main() {
    int n, m, i, j, k = 0;
    printf("Enter the size of array A: ");
    scanf("%d", &n);

    int arrA[n];
    printf("Enter %d integers into array A:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }

    printf("Enter the size of array B: ");
    scanf("%d", &m);

    int arrB[m], result[n < m ? n : m];

    printf("Enter %d integers into array B:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }

    // Finding intersection of arrays
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arrA[i] == arrB[j]) {
                result[k] = arrA[i];
                k++;
                break;
            }
        }
    }

    if (k == 0) {
        printf("Empty set\n");
    } else {
        printf("The intersection of array A and B is:\n");
        for (i = 0; i < k; i++) {
            printf("%d ", result[i]);
        }
    }

    return 0;
}
