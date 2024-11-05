#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Input number of terms:");
scanf("%d",&n);
printf("\nThe odd numbers are:");
for(int i=1;i<=n;i=i+2){

printf("%d ",i);
sum+=i;
}
printf("\nThe sum of odd natural number upto %d terms: %d \n",n,sum);

return 0;


}