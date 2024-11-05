// // #include<stdio.h>
// // int main()
// // {
// // int n,min,max;
// // printf("Enter a number: ");
// // scanf("%d",&n);
// // int arr[n];
// // printf("enter %d of element: ",n);
// // for(int i=1;i<=n;i++){
// // scanf("%d",&arr[i]);
// // }
// // min=max=arr[0];
// // for(int i=1;i<=n;i++){
// //     if(min>arr[i])
// //     min=arr[i];
// //     if(max<arr[i])
// //     max=arr[i];
// // }
// // printf("Min: %d\n",min);
// // printf("Max: %d\n",max);
// // return 0;

// // }
// #include <stdio.h>

// int main() {  //min max problem
//     int n, i, max, min, max_index, min_index;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter the elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     max = arr[0];
//     min = arr[0];
//     max_index = 0;
//     min_index = 0;

//     for(i = 1; i < n; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//             max_index = i;
//         }
//         if(arr[i] < min) {
//             min = arr[i];
//             min_index = i;
//         }
//     }

//     printf("Max: %d, Index: %d\n", max, max_index);
//     printf("Min: %d, Index: %d\n", min, min_index);

//     return 0;
// }
// #include<stdio.h>
// void main(){
// int n1,n2;
// char ch;
// printf("Enter number 1,2 or q: ");
// scanf("%d %d",&n1,&n2);
// scanf("%c",&ch);
// if(n1=1){
//     printf("SPL is fun");
// }
// else if(n2=2){
//     printf("University life is best");
// }
// else if(ch=='q'){
//     printf("Quit");
// }
// }
#include<stdio.h>
void main()
{
    char c;
    scanf(" %c",&c);
    switch(c)
    {
    case '1':
    {
        printf("CSE is fun ");
        break;
    }
    case '2':
    {
        printf("(On campus)University life is the BEST");
        break;
    }
    case 'q':
    {  printf("Quit");
        break;

    }
    }
}