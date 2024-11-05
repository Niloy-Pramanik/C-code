#include<stdio.h>
int main()
{
    int n,x=1,y=2,z;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("1");
    for (int i=2;i<=n;i++){
        z=x+y;
        printf(" %d ",z);
        x=z;
        y++;
    }

return 0;
}