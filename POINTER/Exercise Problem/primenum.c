#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter a positive integer: ");
scanf("%d",&n);
if(n==0 || n==1)
sum=0;
for(int i=2;i<=n/2;++i){
if(n%i==0){
    sum=1;
    break;
}
}
if (sum==0)
printf("%d is a prime number.",n);
else{
    printf("%d is not prime number.",n);

}

return 0;
}