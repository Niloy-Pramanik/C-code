#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter the number: ");
scanf("%d %d",&n1,&n2);
if(n1>n2)
printf("%d is greater than %d",n1,n2);
else if(n1<n2){
    printf("%d is less than %d",n1,n2);
}
else if(n1==n2){
    printf("%d is equal %d",n1,n2);
}
return 0;

}