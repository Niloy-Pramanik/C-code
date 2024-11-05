#include<stdio.h>
int main()
{
int n,k=1;  //nested-123,234,345...
printf("Enter a number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%d",k++);
    }
    k-=n-1;
    printf("\n");
}
return 0;
}