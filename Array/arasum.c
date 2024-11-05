#include<stdio.h>
int main()
{
int n,sum=0;   //input n number and sum of all numbers.

printf("Enter a number: ");
scanf("%d",&n);

int arr[n];
printf("Enter %d integer: ",n);
for(int i=1;i<=n;i++){
scanf("%d",&arr[i]);
sum+=arr[i];
}
printf("The sum of all numbers: %d",sum);
return 0;





}