#include <stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Input two angles of traingle:");
    scanf("%d,%d",&num1,&num2);
    sum= 180-(num1+num2);
    printf("Third angle of a Traingle %d \n",sum);
    return 0;
}