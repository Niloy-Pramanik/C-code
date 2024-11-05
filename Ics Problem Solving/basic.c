#include <stdio.h>
int main()
{
    float marks; 
    printf("Enter your marks:");
    scanf("%f",&marks);
    if(marks<50){
        printf("Grade is F\n");
    }
    else if(marks>=50 && marks<60){
        printf("You pass");
    }
    else if(marks>-60 && marks<70){
        printf("Grade is C \n");
    }
return 0;
}