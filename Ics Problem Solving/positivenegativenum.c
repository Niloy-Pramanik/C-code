#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0.0){
        printf("A positive number");
    }
    else if(n<0.0)
        printf("a negative number");
    
    else
    printf("You entered: 0 is positive");
    return 0;
}