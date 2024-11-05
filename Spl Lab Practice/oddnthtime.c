#include<stdio.h>
int main()               //nth time print
{
int n,sum=1;
printf("Enter the number: ");
scanf("%d",&n);
printf("1 ,");
for(int i=2;i<=n;i++){
    sum+=2;
    printf("%d , ",sum);

}
return 0;

}
