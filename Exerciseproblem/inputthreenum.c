#include<stdio.h>
int main ()
{
    int num1,num2,num3,sum;
    printf("Enter three number:");
    scanf("%d,%d,%d",&num1,&num2,&num3);
    sum= num1+num2+num3;
    printf("The sum of three number: %d \n",sum);
    return 0;
}