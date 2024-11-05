#include<stdio.h>
int main()
{
int x,y;
printf("Enter the value of (X,Y): ");
scanf("%d %d",&x,&y);
printf("Multiplication: %d\n",x*=y);
printf("Division: %d\n",x/=y);

return 0;

}