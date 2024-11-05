#include<stdio.h>
int F(int n){
    if(n==0)
        return 0;
        else if(n==1)
            return 1;
            else
            return 2*F(n-1)+3*F(n-2);
        

    
    }
    int main(){

        int n;
        printf("Enter the number: ");
        scanf("%d",&n);
        printf("%d\n",F(n));
        return 0;
    }
