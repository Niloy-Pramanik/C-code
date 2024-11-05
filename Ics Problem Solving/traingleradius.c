#include <stdio.h>
int main()
{
    int num1,num2,num3,sum ;
    printf("Enter the number:");
    scanf("%d %d %d",&num1,&num2,&num3,sum);
    sum= (num1+num2+num3) ;
    if(sum == 180 && num1 > 0 && num2 > 0 && num3> 0){
        printf("Yes angle is valid");
    }
        else 
         
         printf("No:angle is not valid");
         return 0;
      
        

    }
