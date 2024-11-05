#include<stdio.h>
int main()
{
    char op;
int n1,n2;
printf("Enter an operatoras (+,-,*,/): ");
scanf("%c",&op);
printf("Enter a number: ");
scanf("%d %d",&n1,&n2);
if('+')
printf("the sum is: %d\n",n1+n2);
else if ('-'){
    printf("The substract is: %d\n",n1-n2);
}
else if('/')
printf("The division is: %d\n",n1/n2);

else if('*')
printf("The multiplication is: %d\n",n1*n2);
else{
    printf("Wrong attempt!");
}
return 0;




}