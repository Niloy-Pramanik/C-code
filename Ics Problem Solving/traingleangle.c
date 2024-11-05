#include<stdio.h>
int main() //enter three angle to identify output valid or invalid
{
int a,b,c;
printf("Enter three angles:\n");
scanf("%d %d %d",&a,&b,&c);
if(a>0&& b>0&& c>0&& a+b>c&& b+c>a&& c+a>b){
    printf("Valid");
}
else{
    printf("Invalid");
}
return 0;
}