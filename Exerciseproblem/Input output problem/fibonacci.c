//  



 

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int a = 0, b = 1, c; 
    while (b < num)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if (b == num)
    {
        printf("%d is a Fibonacci number.\n", num);
    }
    else
    {
        printf("%d is not a Fibonacci number.\n", num);
    }

    return 0;
}