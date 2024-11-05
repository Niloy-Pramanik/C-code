#include<stdio.h>
int main()
{
int n,sum=0;
printf("Input numbers of terms:");
scanf("%d",&n);
printf("The even numbers are:");
for(int i=1;i<=n;i++){
   
    printf("%d ",2*i);
     sum+=2*i;
}
printf("\nThe sum of even natural number upto %d terms:%d\n",n,sum);
return 0;

}