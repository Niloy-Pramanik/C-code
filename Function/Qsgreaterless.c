#include<stdio.h>

void greater_or_less(int a,int b){
    if(a>b){
        printf("%d greater than %d\n",a,b);

    }
    else if(a<b){
        printf("%d is less than %d\n",a,b);
    }
}

     int main(){
        int a,b;
        printf("Enter the number: ");
        scanf("%d %d",&a,&b);
        greater_or_less(a,b);
        return 0;
     }   


    
