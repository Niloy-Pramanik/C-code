#include <stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        sum=i*n;
        printf("%d * %2d = %2d\n", n, i,sum);
    }
    return 0;
}