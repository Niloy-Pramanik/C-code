// // // // #include <stdio.h>

// // // // int main() {
// // // //     int m, n, sum = 0;

// // // //     printf("Enter the dimensions of the matrix: ");
// // // //     scanf("%d %d", &m, &n);

// // // //     int matrix[m][n];

// // // //     printf("Enter the elements of the matrix:\n");
// // // //     for(int i=0; i<m; i++) {
// // // //         for(int j=0; j<n; j++) {
// // // //             scanf("%d", &matrix[i][j]);
// // // //             sum += matrix[i][j];
// // // //         }
// // // //     }

// // // //     printf("Sum of all the elements in the matrix: %d", sum);

// // // //     return 0;
// // // // }
// // // #include<stdio.h>
// // // int main(){
// // // int i,j;
// // // for(i=3; i>=1; i--){
// // //  for (j=1; j<=i; j++){
// // //  printf("%d", 2*j+1);
// // //  }
// // // }
// // //  printf("\n");
// // // }
// // #include <stdio.h>
// // int main()
// // {
// //     int a = 508 % 3 + 1;
// //     int b = 508 % 2 + 1;
// //     int c = 508 % 3 + 2;
// //     for (int i = 0; i < 8; i++)
// //     {
// //         switch (i)
// //         {
// //         case 0:
// //            { i += a;
// //            printf("%d",i);
// //             break;}
// //         case 1:
// //             i += b;
// //              printf("%d",i);
// //             break;
// //         case 2:
// //             i += a;
// //              printf("%d",i);
// //             break;
// //         case 3:
// //             i += c;
// //              printf("%d",i);
// //             break;
// //         case 4:
// //             i += b;
// //              printf("%d",i);
// //         case 5:
// //             i += c;
// //              printf("%d",i);
// //             break;

// //         default:
// //             i += 4;
// //             break;
// //         }
// //     }

// //     return 0;
// // }
// #include <stdio.h>
// int main()
// {
//     int a = 508 % 3 + 1;
//     int b = 508 % 2 + 1;
//     int c = 508 % 3 + 2;
//     printf("a = %d b = %d c = %d\n", a, b, c);
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d\n", i);
//         switch (i)
//         {

//         case 0:
//         {
//             i += a;
//             printf("case 0 = %d + %d = %d\n", i - a, a, i);
//             break;
//         }
//         case 1:
//         {
//             i += b;
//             printf("case 1 =  %d + %d = %d\n", i - b, b, i);
//             break;
//         }
//         case 2:
//         {
//             i += a;
//             printf("case 2 = %d + %d = %d\n", i - a, a, i);
//             break;
//         }
//         case 3:
//         {
//             i += c;
//             printf("case 3 =  %d + %d = %d\n", i - c, c, i);
//             break;
//         }
//         case 4:
//         {
//             i += b;
//             printf("case 4 = %d + %d = %d\n", i - b, b, i);
//             break;
//         }
//         case 5:
//         {
//             i += c;
//             printf("case 05 = %d + %d = %d\n", i - c, c, i);
//             break;
//         }

//         default:
//         {
//             i += 4;
//             printf("case default %d\n", i);
//             break;
//         }
//         }
//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
int F[6]={0};
n=3;
for(int i=0;i<6;i++){
    F[i]=n+i;
    if(F[i]%2==0){
        F[i]*=2;
    
    }
}
    return 0;
}


}


