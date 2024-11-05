// #include<stdio.h>
// int main(){
// int arr[100],n;
// int *ptr;
// printf("Enter the number of elements: ");
// scanf("%d",&n);
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// printf("Reverse elemets: ");
// for(int i=n;i>=0;i--){
//     printf("%d",*(ptr-arr[i]));
// }


// return 0;

// }

#include <stdio.h>

void reverseArray(int *arr, int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
