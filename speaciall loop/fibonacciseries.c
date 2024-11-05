#include <stdio.h>
int main()
{
int a=0,b=1,sum,i,n;
printf("Input number of terms to display:");
scanf("%d",&n);
printf("Here is the fibonacci series upto to %d terms: \n",n);

for(int i=3;i<=n;i++){
sum= a+b;
printf("%d ",sum);
a=b;
b=sum;
}
printf("\n");
return 0;


}