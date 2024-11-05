// #include<stdio.h>
// void main()
// {
// int n,sum=0;
// printf("Enter a number: ");
// scanf("%d",&n);
// int arr[n];
// printf("Enter %d integers: ",n);
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//     if(i%2==0 && arr[i]%2==0){
//         sum+=arr[i];
//     }
// }
// printf("The sum of even index: %d",sum);


// }
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i <= n; i++) {
        scanf("%d", &arr[i]);
        if (i % 2 == 0 && arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("Sum of even indexed integers in the array: %d\n", sum);
    return 0;
}
