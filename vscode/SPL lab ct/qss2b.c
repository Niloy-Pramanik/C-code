#include<stdio.h>
float multiply(float *x,int *n){
    return(*x * *n);
}
int main(){
    float x;
    int n;
    printf("Enter the number: ");
    scanf("%f",&x);
    scanf("%d",&n);
    float result=multiply(&x,&n);
    printf("X is: %.1f\n",result);
    return 0;
}