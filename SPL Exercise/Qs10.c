#include<stdio.h>
int main()
{
int n,m;
printf("Enter a Size of array A: ");
scanf("%d",&n);
int arrA[n];
printf("Enter %d element of array: ",n);
for(int i=0;i<n;i++){

    scanf("%d",&arrA[i]);
}
printf("Enter the size of array B: ");
sacnf("%d",&m);
int arrB[m];
for(int i=0;i<m;i++){
    scanf("%d",&arrB[i]);
}

int temp;
for(int i=0;i<n && i<m;i++){
    temp=A[i];
    A[i]=B[i];
    B[i]=temp;
  
}
printf("Array A: ");
for(int i=0;i<n;i++){
    printf("%d\n",arrA[i]);
}
printf("Array B: ");
for(int i=0;i<n;i++){
    printf("%d",arrB[i]);
}
printf("\n");
return 0;



}