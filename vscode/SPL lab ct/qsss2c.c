#include<stdio.h>
void subtract(float *x,int n){
    *x-=n;

}
int main(){
    float x;
    int n;
    printf("Enter the number: ");
    scanf("%f",&x);
    scanf("%d",&n);
     subtract(&x,n);
     printf("x= %.1f\n",x);
     return 0;

}