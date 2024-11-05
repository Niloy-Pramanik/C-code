// #include<stdio.h>
// void printreverse(int arr[],int n){
//     for(int i=n-1;i>=0;i--){
//         printf("%d\n",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     printf("Enter the number: ");
// int n;
// scanf("%d",&n);
// int arr[n];
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);

// }
// printreverse(arr,n);
// return 0;

// }


#include<stdio.h>
void printreverse(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printreverse(arr,n);
    return 0;



}