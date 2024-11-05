#include<stdio.h>
int main()
{
int A[3][4]={{4,3,2,1},{2,3,1,0},{-1,2,1,1}};
int B[3][4]={{1,2,1,0},{-1,2,1,1},{-3,1,0,1}};
int sum[3][4];
// sum[0],[0]=A[0][0]
for(int i=0;i<=3;i++){//row
for(int j=0;j<=4;j++){ //column
sum[i][j]=A[i][j]+B[i][j];
}

}
for(int i=0;i<3;i++){
    for(int j=0;j<=4;j++)
{
printf("%d",sum[i][j]);
}
}
printf("\n");
return 0;
}