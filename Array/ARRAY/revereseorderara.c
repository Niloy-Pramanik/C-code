
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int A[n], B[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++) {
        B[n-1-i] = A[i];
    }
    printf("Array A : ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\nArray B : ");
    for (i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}
