#include<stdio.h>
void main()
{
int n,sum=0;
printf("Enter a nuumber: ");
scanf("%d",&n);
int arr[n];
printf("Enter %d integers: ",n);
for(int i=1;i<=n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0){
        sum+=arr[i];
    }

}
printf("The sum of even nuumber: %d",sum);


}