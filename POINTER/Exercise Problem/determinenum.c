#include<stdio.h>
int main()
{
int n;
printf("Enter the number: ");
scanf("%d",&n);
if(n==0)
printf("Zero");
 else if(n<0){
    printf("Negative");
}
else if(n>0){
    printf("Positive");
}
return 0;

}