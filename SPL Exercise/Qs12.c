// #include<stdio.h>
// void main()
// {
// int n;
// printf("Enter a number: ");
// scanf("%d",&n);
// int arr[n];
// printf("Enter %d element: ",n);
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }






// }
#include <stdio.h>

void insertion_sort(int A[], int n) {
     int i, j, key;
    for (i = 1; i < n; i++) {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j+1] = A[j];
            j = j - 1;
        }
        A[j+1] = key;
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    
    printf("\n");
    insertion_sort(A, n);
    printf("Array after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
