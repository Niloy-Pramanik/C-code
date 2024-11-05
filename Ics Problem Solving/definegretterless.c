#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the number:");
    scanf("%d %d",&x,&y);
    //   printf("%d %d",x,y);
    if(x>y){
        printf("%d is greater than %d ",x,y);
    }
    else if(x<y){
        printf(" %d is less than %d ",x,y);
    }
    else if (x==y){
        printf(" %d is equal %d ",x,y);
    }


return 0;
}