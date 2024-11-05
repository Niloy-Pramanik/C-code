#include<stdio.h>
struct complex{
float real;
float imag;

};
int main(){
struct complex n;
printf("Enter the real number: ");
scanf("%f",n.real);
printf("Enter the imaginary: ");
scanf("%f",n.imag);
if(n.real>=0){
    printf("%.2f+%.2fi\n",n.real,n.imag);
}
else{
    printf("%.2f-%.2f\n",n.real,n.imag);
}


return 0;



}
