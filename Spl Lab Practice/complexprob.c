#include <stdio.h>
int main()
{
int n,sum;
printf("Enter the number: ");
scanf("%d",&n);
for(int i=1;i<-n;i++){

sum= (i*i);
 for(int i=2;i<=n;i++)
 sum+=n*i*i;
printf("Results %d: ",sum);
}

return 0;



}


