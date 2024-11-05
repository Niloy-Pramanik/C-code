#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Test Data:");
    scanf("%d",&n);
    printf("\nThe first %d natural number is:\n",n);
    for(i=1;i<=n;i++){
        sum+=i;
        printf("%d ",i);
    }
   printf("\nThe sum of natural number upto %d terms:%d\n",n,sum);
return 0;   
}
