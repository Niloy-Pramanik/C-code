#include <stdio.h>
int main()
{
// int n,sum;
// printf("Enter the number: ");
// scanf("%d",&n);
// sum=n++;
// printf("X++: %d\n",sum);
// sum=++n;
// printf("++X: %d\n",sum );
// printf("--X: %d\n",n--);
// printf("--X: %d\n",--n);
// return 0;
 int x,y;
printf("Enter the number: ");
scanf("%d %d",&x,&y);

printf("Increment Value: %d\n",x+=y);

printf("Decremenmt Value: %d\n",x-=y);
return 0;




}