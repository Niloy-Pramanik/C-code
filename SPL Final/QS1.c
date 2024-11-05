#include <stdio.h>
#include <math.h>

int is_prime(int x);
int digit_sum(unsigned int x);
int is_superprime(int x);

int is_prime(int x)
{
    if(x == 1)
        return 0;

    if(x == 2 || x == 3)
        return 1;

    if(x%2 == 0 || x%3 == 0)
        return 0;

    int limit = sqrt(x);
    for(int i=5; i<=limit; i+=6)
    {
        if(x%i == 0 || x%(i+2) == 0)
            return 0;
    }

    return 1;
}

int digit_sum(unsigned int x)
{
    if(x/10 == 0)
        return x;

    return x%10 + digit_sum(x/10);
}

int is_superprime(int x)
{
    if(is_prime(x) && is_prime(digit_sum(x)))
        return 1;

    return 0;
}
int main(){

    int a, b;

    printf("Enter the range [a and b]: ");
    scanf("%d %d", &a, &b);

    printf("The superprime numbers in the range %d & %d are:\n", a, b);

    for(int i=a; i<=b; i++)
    {
        if(is_superprime(i))
            printf("%d\n", i);
    }

    return 0;
}

