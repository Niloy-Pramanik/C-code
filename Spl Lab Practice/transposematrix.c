// // #include<stdio.h>
// // int main()
// // {

// // int row,column;
// // scanf("%d %d",&row,&column);
// // int A[row][column];
// // int tranA[column][row];
// // for(int i=0;i<row;i++){
// //     for(int j=0;j<column;j++){

    
// //     scanf("%d",&A[i][j]);

// // }
// //     }
// //     for(int i=0;i<=column;i++){
// //         for(int j=0;j<row;j++)
// //     {

// //         printf("%d",tranA[i][j]);
// //     }
// //     printf("\n");
// //     }


// // return 0;

// // }

// #include<stdio.h>
// int main()
// {
// int m,n,p;
// scanf("%d %d",&m,&n);
// int A[m][n];
// for(int i=0;i<m;i++){
// for(int j=0;j<p;j++)
// }
// result [i][j]=0

// }

#include<stdio.h>
int main()
{
int m,n,ij,k,l;
scanf("%d %d".&m,&n);
int matrix[m][n];
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&matrix[i][j]);
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        for(k=0;k<m;k++){
            for(l=0;l<n;l++){
                if((k>i || l>j)&& matrix[i][j]==matrix[k][l])
            {
            matrix[k][l]=-1;
            }
        }

    }
}
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d")
    }
}




return 0;
}
