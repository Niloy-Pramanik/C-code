#include<stdio.h>
int main()
{
int n1,n2,sum;
int choice;
printf("Enter two number & choices: \n");
scanf("%d %d %d",&n1,&n2,&choice);
switch (choice)
{
case 1:
sum=n1+n2;
printf("Addition: %d",sum);
    break;

default:
    break;
}
return 0;


}
