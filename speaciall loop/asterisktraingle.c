#include<stdio.h>
void main()
{
int i,j,rows;
printf("Input number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++){

for(j=1;j<=i;j++)
//  printf("*");// asterisk triangle
printf("%d",j,i);
printf("\n");
}

return 0;


}