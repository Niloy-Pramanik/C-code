#include<stdio.h>
int main()
{
int sum=0,i,a=1,b,x=1,y=1;
for(i=1;i<=5;i++){
    sum+=a;
    b=6*x+1;
    a+=b;
    y++;
    x+=y;
    printf("%d",sum,b,a,x);
}
return 0;

}