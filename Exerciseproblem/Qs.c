#include<stdio.h>
int main()
{
      int n;//input number untill 7
    
   
    do{
         printf("Enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n% 7==0){
        break;
        }
        
    }while(1);
    printf("Thank you");
        
return 0;
}