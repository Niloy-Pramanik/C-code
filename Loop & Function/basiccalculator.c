#include <stdio.h>
int main() {    

    int number1, number2, number3,sum;

    printf("Enter two integers:\n ");
    scanf("%d %d %d", &number1, &number2,&number3);

    // calculating sum
    sum = number1 + number2+ number3;      
    
    printf("%d + %d+ %d = %d \n", number1, number2,number3, sum);
    
    return 0;
}