#include<stdio.h>

int main()
{
float x,y,sum,a2,b3,c2,c3;
printf("Enter the number: ");
scanf("%f %f",&x,&y);
a2=x*x;
b3=y*y*y;
c2=x*x*x;
c3=y*y;

 sum= (3.31 * a2 + 2.01 * b3) / (7.16 * c3 + 2.01 * c2);
printf("X= %f",sum,a2,b3,c3,c2);
return 0;





}