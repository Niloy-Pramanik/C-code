// #include<stdio.h>
// int main(){
// int arr [100],n;
// int *ptr;
// printf("Enter the number: ");
// scanf("%d",&n);

// printf("Enter the elements: ");
// for(int i=0;i<n;i++){
//     scanf("%d",arr[i]);

// }
// ptr=arr;
// for(int i=0;i<n;i++){
//     printf("%d",*(ptr+i));
// }


// return 0;
// }

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // printf("\nArray elements using array index: \n");
    // for (i = 0; i < n; i++) {
    //     printf("%d ", arr[i]); 
    // }

    printf("\n\nArray elements using pointers: \n");
    ptr = arr; // Assigning the base address of the array to the pointer variable ptr

    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); // Dereferencing the pointer to access the array elements
    }

    return 0;
}
