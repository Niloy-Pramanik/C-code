#include<stdio.h>
int fib(int n){
    if(n==0 || n==1){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    }
int fibNn1=fib(n-1);
int fibNn2=fib(n-2);
int fibN=fibNn1+fibNn2;
//printf("Fib of %d is: %d\n",n,fibN);

return fibN;


}
int main(){

    printf("%d",fibN(6));
 
    return 0;

}