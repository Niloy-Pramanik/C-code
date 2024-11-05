#include <stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    printf("Enter the result (0-100): \n");
    if (marks <= 30){
        printf("Fail \n");
    }
   else  {
        printf("Pass \n");
    }

return 0;
}    
    