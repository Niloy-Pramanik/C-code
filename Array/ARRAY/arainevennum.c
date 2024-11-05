#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
 int arr[n];
 printf("Enter %d integers: ",n);
 for(int i=1;i<=n;i++){
 scanf("%d",&arr[i]);
 if(arr[i]%2==0)
 sum+=arr[i];
 }
printf("THe sum of even numbers: %d",sum);
return 0;

}