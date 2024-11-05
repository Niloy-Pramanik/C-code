// #include<stdio.h>
// int main()
// {
// int n;
// printf("Enter a number: ");
// scanf("%d",&n);
// int arr[n];
// printf("Enter %d element: ");
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }

// return 0;
// }
#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers into the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Removing duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    printf("The array after removing duplicates is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
