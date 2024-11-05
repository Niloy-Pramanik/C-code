// #include<stdio.h>
// void swapnumbers(int *a,int *b,){
// int temp =*a;
// *a=*b;
// *b=temp;

// }
// int main(){
//     int a,b;
//     printf("Before swap: %d %d\n ",a,b);
//     scanf("%d %d",&a,&b);
//     printf("After swap: %d %d\n",a,b);
//     return 0;
// }

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    //printf("Value in main:   %d    %d\n", num1, num2);
    swap(&num1, &num2);
    
    printf("Value in func:    %d    %d\n", num1, num2);
    printf("Value in main:   %d    %d\n", num1, num2);
    return 0;
}
