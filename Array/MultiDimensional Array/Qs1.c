#include <stdio.h>

int main() {
    int arr[3][3], i, j;

    // get input for 3x3 array
    printf("Enter 9 integers for 3x3 array:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // print array as matrix view
    printf("Matrix view of 3x3 array:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
