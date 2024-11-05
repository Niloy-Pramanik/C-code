#include <stdio.h>
#include <math.h>

int main()
{
    int number, sum = 1;
    printf("Enter a positive non-zero number: \n");
    scanf("%d", &number);
    while (sum < number)
    {
        sum *= 2;
    }
    if (sum == number)
    {
        printf("Yes\n");
    }
    else if(number==0){
        printf("%d is not valid input",number);
    }
    else if(number<0){
        printf("Negative input is not valid");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
