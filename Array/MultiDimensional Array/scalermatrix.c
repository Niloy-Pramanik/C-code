// // // // #include<stdio.h>
// // // // int main()
// // // // {
// // // //     int n;
// // // //     printf("Enter a number: ")
// // // //     scanf("%d",&n);

// // // //     int a[n][n];

// // // //     for(int i=1; i<=n; i++)
// // // //     {
// // // //         for(int j=1; j<=n; j++)
// // // //         {
// // // //             scanf("%d",&a[i][j]);
// // // //         }
// // // //     }
// // // //     int scalar=a[1][1];

// // // //     int count=0;

// // // //     for(int i=1; i<=n; i++)
// // // //     {
// // // //         for(int j=1; j<=n; j++)
// // // //         {
// // // //             if(i==j)
// // // //             {
// // // //                 if(a[i][j]==scalar)
// // // //                 {
// // // //                     count++;
// // // //                 }
// // // //             }
// // // //         }
// // // //     }

// // // //     int c=0;

// // // //     for(int i=1; i<=n; i++)
// // // //     {
// // // //         for(int j=1; j<=n; j++)
// // // //         {
// // // //             if(i!=j)
// // // //             {
// // // //                 if(a[i][j]!=0)
// // // //                 {
// // // //                     c++;
// // // //                     break;
// // // //                 }
// // // //             }
// // // //         }
// // // //         if(c!=0)
// // // //         {
// // // //             break;
// // // //         }
// // // //     }

// // // //     if(count==n && c==0)
// // // //     {
// // // //         printf("Scaler");
// // // //     }
// // // //     else
// // // //     {
// // // //         printf("Not Scaler");
// // // //     }




// // // //     return 0;
// // // // }


// // // #include<stdio.h>
// // // void main(){

// // //     int n,m,flag=1;
// // //     int matrix[10][10];
// // //     printf("Enter the number of row and column: ");
// // //     scanf("%d %d",&m,&n);
// // //     printf("Enter  the element of matrix: \n");
// // //     for(int i=0;i<n;i++){
// // //         for(int j=0;j<m;j++){

// // //         }
// // //         scanf("%d",&matrix[i][j]);
// // //     }
// // // }
// // // if(n !=m){
// // //     printf("The matrix is not a square matrix.\n");
// // // }
// // // else{
// // //     for(int i=0;i<n;i++){
// // //         for(int j=0;j<m;j++){
// // //             if(i==j && matrix[i][j] !=matrix[0][0]){
// // //                 flag=0;
// // //                 break;
// // //             }
// // //             else if(i!=j && matrix[i][j]!=0){
// // //                 flag=0;
// // //                 break;
// // //             }
// // //         }
// // //     }
// // //     if(flag==1){
// // //         printf("The matrix is a scaler matrix.\n");

// // //     }
// // //     else{
// // //         printf("The matrix is not scaler.\n")
// // //     }
// // // }
// // #include <stdio.h>

// // int main()
// // {
// //     int n, m, i, j, flag = 1;
// //     int matrix[10][10];

// //     printf("Enter the number of rows and columns of the matrix: ");
// //     scanf("%d %d", &n, &m);

// //     printf("Enter the elements of the matrix: \n");
// //     for(i = 0; i < n; i++)
// //     {
// //         for(j = 0; j < m; j++)
// //         {
// //             scanf("%d", &matrix[i][j]);
// //         }
// //     }

// //     if(n != m)
// //     {
// //         printf("The matrix is not a square matrix. Hence, not a scalar matrix.\n");
// //     }
// //     else
// //     {
// //         for(i = 0; i < n; i++)
// //         {
// //             for(j = 0; j < m; j++)
// //             {
// //                 if(i == j && matrix[i][j] != matrix[0][0])
// //                 {
// //                     flag = 0;
// //                     break;
// //                 }
// //                 else if(i != j && matrix[i][j] != 0)
// //                 {
// //                     flag = 0;
// //                     break;
// //                 }
// //             }
// //         }

// //         if(flag == 1)
// //         {
// //             printf("The matrix is a scalar matrix.\n");
// //         }
// //         else
// //         {
// //             printf("The matrix is not a scalar matrix.\n");
// //         }
// //     }

// //     return 0;
// // }

// #include<stdio.h>
// void main()
// {
// int n;
// printf("Enter the number: ");
// scanf("%d",&n);
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=n;j++){
//         if(j<=n-i){
//             printf("");
//         }
//         else{
//             printf("*");
//         }
//     }
// }
// for(int j=n-1;j>=1;j--){
//     if(j<=n-i){
//         printf("");
//     }
//     else{
//         printf("*");
//     }
//     printf("\n");
// }




// }
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }

        for(int j=n-1;j>=1;j--)
        {
            if(j<=n-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }




    return 0;
}