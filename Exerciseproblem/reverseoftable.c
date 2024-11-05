#include <stdio.h>
int main() //print reverse of the table
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d\n",n *i );
    }
    return 0;
}
