#include<stdio.h>
void main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
int ara[n];
printf("%d number of element: ",n);
for(int i=0;i<=n;i++){
    scanf("%d",&ara[i]);
}
printf("Reverse array: ");
for(int i=n-1;i>=0;i--){
printf("%d",ara[i]);


}


}