#include <stdio.h>
int main()
{
int n,fact=1;
printf("Input the number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){

    fact=fact*i;

}
printf("\nThe factorial of %d is:%d",n,fact);


return 0;
}