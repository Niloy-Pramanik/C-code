#include<stdio.h>
int main() 
// keep taking number as input from user until user enters an odd
{
    int n;
   
    do{
         printf("Enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n% 2 !=0){
        break;
        }
        
    }while(1);
    printf("Thank you");
        
return 0;

}