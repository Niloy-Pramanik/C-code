#include<stdio.h>
int main()
{
int n;  //3=123,123,123/nested
printf("Enter a number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%d",j);
    }
    printf("\n");
}
return 0;

}