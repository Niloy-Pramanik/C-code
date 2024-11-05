#include<stdio.h>
void main()
{
int n,x,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
int arr[n];
printf("Enter %d element: ",n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter the number to search: ");
scanf("%d",&x);
printf("searching for %d--\n",x);
for(int i=0;i<n;i++){
    if(arr[i]==x){
        printf("Found at index position: %d\n",i);
        sum=1;
    }
}
if(!sum){
    printf("NOT FOUND\n");
}


}