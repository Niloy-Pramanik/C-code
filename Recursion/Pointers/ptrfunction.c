#include<stdio.h>
void square(int n);
void _square(int *n);

int main(){   //call by value
int number=4;
square(number);
printf("Number= %d\n",number);

_square (&number);
printf("Number= %d\n",number);
return 0; 
}
void square(int n){
n=n*n;
printf("Square= %d\n",n);
}
void _square(int *n){
    *n=(*n)*(*n);  4*4
    printf("Square=%d\n",*n);
}
