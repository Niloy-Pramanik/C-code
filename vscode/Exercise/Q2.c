#include<stdio.h>
#include<math.h>
int main ()
//less than 100 greater than 9,make true false
{
int x;
printf("Enter the number:");
scanf("%d",&x);
    printf("%d \n",x>9 && x<100);
    return 0;
}