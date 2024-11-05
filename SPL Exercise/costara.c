// // #include<stdio.h>
// // int main()
// // {
// // int n,max=0,index=[0];
// // printf("Entet a number: ");
// // scanf("%d",&n);
// // int arr[n];
// // printf("Enter %d element: ",n);
// // for(int i=0;i<n;i++){
// // scanf("%d",&arr[i]);
// // }
// // int maxprice=index[0];
// // for(int i=0;i<n;i++){
// //     if(max[i]>maxprice){
// //     maxprice=max[i];
// //     index=i;
// //     }
// // }
// // printf("%d %dth",maxprice,index+1);
// // return 0;


// // }
// // #include<stdio.h>
// // int main()
// // {
// // int n;
// // printf("Enter a number: ");
// // scanf("%d",&n);
// // int price[n];
// // printf("Enter %d element: ",n);
// // for(int i=0;i<n;i++){
// //     scanf("%d",%price[i]);
// // }
// // int budget;
// // scanf("%d",&budget);
// // int searchld=-1;
// // for(int i=0;i<n;i++){
// //     if(prices[i]==budget)

// // searchld=i;
// // break;
// // }



// // }

// #include<stdio.h>
// int main()
// {
// int n,j;
// printf("Enter a number: ");
// scanf("%d",&n);
// int prices[n];
// for(int i=0;i<n;i++){
//     scanf("%d",&prices[i]);
// }
// int buyld,selld,maxprofit=0;
// for(int i=0;i<n;i++){
//     for(j=i+1;j<n;j++){
//         int profit=prices[j]-prices[i];
//         if(profit>maxprofit){
//             buyld=i;
//             selld=j;
//         }
//     }
// }
// printf("%d %d\n",prices[buyld],prices[selld]);
// printf("%d %d\n",buyld+11,selld+11);
// return 0;

// }
#include<stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=0;j<=n-i;j++){
        printf(" ");
    }
    for(int k=0;k<2*i-1;k++){
        printf("*");
    }
    printf("\n");
}
return 0;


}