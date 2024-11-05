#include<stdio.h>
int main()
{
int n;
printf("Enter the number of ara: ");
scanf("%d",&n);
int arr[n];
printf("enter the %d element: ",n);
for(int i=0;i<=n;i++){
    scanf("%d",&arr[i]);

}
printf("Array in reverse order: ");
for(int i=n-1;i>=0;i--){
    printf("%d ",arr[i]);
}
return 0;

}