// #include<stdio.h>
// void main()
// {
// int n;
// printf("Enter a number: ");
// scanf("%d",&n);
// int arrA[n],arrB[n];
// printf("Enter %d element: ",n);
// for(int i=0;i<=n;i++){
//     scanf("%d",&arrA[i]);
// }
// for(int i=0;i<n;i++){
   
//     printf("Array A: %d",arrA[i]);
// }
// for(int i=n-1;i>=0;i--){
//     printf("Array B: %d",arrB[i]);
// }
// printf("\n");



//     }

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arrA[n], arrB[n];
    printf("Enter %d integers into the array A:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }
    // Copying elements in reverse order from array A to array B
    for (i = 0; i < n; i++) {
        arrB[n-i-1] = arrA[i];
    }
    printf("Array A : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arrA[i]);
    }
    printf("\nArray B : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arrB[i]);
    }
    printf("\n");
    return 0;
}
