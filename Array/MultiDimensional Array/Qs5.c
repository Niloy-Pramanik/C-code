#include <stdio.h>

int main() {
    int size, i, j;
    printf("Enter the size of the identity matrix: ");
    scanf("%d", &size);

    int identity[size][size];

    // Initialize the identity matrix
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j) {
                identity[i][j] = 1;
            } else {
                identity[i][j] = 0;
            }
        }
    }

    // Display the identity matrix
    printf("Identity matrix of size %d x %d:\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", identity[i][j]);
        }
        printf("\n");
    }

    return 0;
}
