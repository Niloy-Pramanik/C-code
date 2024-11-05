// #include<stdio.h>
// int main(){
// int num1,num2,sum;
// int *ptr1,*ptr2;

// printf("Enter first number: ");
// scanf("%d",&num1);

// printf("Enter second number: ");
// scanf("%d",&num2);

// ptr1=&num1;
// ptr2=&num2;
// sum=*ptr1 + *ptr2;

// printf("The sum is: %d\n",num1,num2,sum);
// return 0;




// }

#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Assigning the addresses of num1 and num2 to pointers ptr1 and ptr2 respectively
    ptr1 = &num1;
    ptr2 = &num2;
    
    // Adding the values at the memory locations pointed to by ptr1 and ptr2
    sum = *ptr1 + *ptr2;
    
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    
    return 0;
}
