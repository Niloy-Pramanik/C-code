#include<stdio.h>
int main()
{
int i,n,sum;
printf("Input the number(Table to be calculated):");
scanf("%d",&n);
for(int i=1;i<=10;i++){
    sum=i*n;

    printf("%d X %d=%d\n",n,i,sum);

}

return 0;

}