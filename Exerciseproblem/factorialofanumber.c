#include <stdio.h>
int main() //Factorial calculation (3!=1*2*3)
{
int n; //for loop 
printf("Enter number:"); 
scanf("%d",&n);
int fact= 1;
for(int i=1;i<=n;i++){ //not input big number
    fact =fact*i;
}
printf("Final Factorial is %d",fact);

return 0;

}