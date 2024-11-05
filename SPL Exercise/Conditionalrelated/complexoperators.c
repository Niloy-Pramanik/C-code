#include <stdio.h>

int main()
{
    float number1, number2, result;
    char operator;
    printf("Enter two numbers and an operator (+, -, *, /): \n");
    scanf("%f %c %f", &number1, &operator, &number2);
    if (operator == '+')
    {
        result = number1 + number2;
        printf("Addition: %.2f\n", result);
    }
    else if (operator == '-')
    {
        result = number1 - number2;
        printf("Subtraction: %.2f\n", result);
    }
    else if (operator == '*')
    {
        result = number1 * number2;
        printf("Multiplication: %.2f\n", result);
    }
    else if (operator == '/')
    {
        if (number2 == 0)
        {
            printf("Division: Zero as divisor is not valid!\n");
        }
        else
        {
            result = number1 / number2;
            printf("Division: %.2f\n", result);
        }
    }
    else
    {
        printf("Invalid operator\n");
    }
    return 0;
}
