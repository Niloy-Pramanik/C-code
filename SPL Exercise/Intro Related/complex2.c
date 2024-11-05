#include <stdio.h>
int main()
{
int integervalue;
printf("Enter the value: ");
scanf("%d",&integervalue);
printf("The integer value is: %d\n",integervalue);

float floatingvalue;
scanf("%f",&floatingvalue);
printf("The floating value is: %.6f\n",floatingvalue);

char ch;
scanf("%c",&ch);
printf("The character value is: %c\n",ch);


return 0;




}