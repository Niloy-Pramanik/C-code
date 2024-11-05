#include <stdio.h>
int main()
{
int n,sum=0;
printf("Input the numbers of terms:  ");
scanf("%d",&n);

for(int i=1;i<=n;i++ ){
printf(" ");
sum+=i;
printf("%d ",i);
}
printf("\nThe sum of the series= %d",n,sum);
return 0;
}