#include<stdio.h>
int main()
{
    int n,month;
    printf("Enter the number(1-12):");
    scanf("%d",&n);
    if(n==1){
        printf("january");
    }
     if(n==2){
        printf("February");
    }
     if(n==3){
        printf("March");
    }
     if(n==4){
        printf("April");
    }
     if(n==5){
        printf("May");
    }
     if(n==6){
        printf("June");
    }
     if(n==7){
        printf("July");
    }
     if(n==8){
        printf("August");
    }
     if(n==9){
        printf("September");
    }
     if(n==10){
        printf("October");
    }
     if(n==11){
        printf("November");
    }
     if(n==12){
        printf("December");
    }
    else
    {
        printf("Not valid month");
    
    }
    return 0;

}