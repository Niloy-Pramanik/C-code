// #include<stdio.h>
// int main()
// {
//     int n;
// printf("Enter a number: ");
// scanf("%d",&n);
// int numbers[n];
// printf("Enter %d integers: ",n);
// for(int i=0;i<=n;i++){
// scanf("%d",&numbers[i]);
// }
// printf("Array in reverse order: ");
// for(int i=n-1;i>=0;i--){
//     printf("%d",numbers[i]);
// }
// printf("\n");
// return 0;

// }
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array in reverse order: ");
    for (i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    
    return 0;
}
