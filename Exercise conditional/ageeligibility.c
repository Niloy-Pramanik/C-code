#include <stdio.h>
int main()
{
    int n;
    printf("Enter the age (18-25):");
    scanf("%d",&n);
    if(n>=18  && n<=25){
        printf("congrtulation! You are eligible for casting vote \n");
 
  
    }
    else

  printf("Sorry!You fucked up \n");
   
    return 0;

}