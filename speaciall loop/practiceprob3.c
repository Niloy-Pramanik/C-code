#include <stdio.h>
int main()
{
int i,n,sum;
printf("Input numbers of terms: ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    sum=i*i*i;
    printf("Number is: %d and cube of the %d is: %d \n",i,i,sum);
}

 return 0;
}