// #include<stdio.h>
// int main()
// {
// int n,r,result;
// int factorial(int n)
// printf("Enter two positive number: ");
// scanf("%d %d",&n,&r);
// result=factorial(n)/(factorial(r)*factorial(n-r));
// printf("%d C %d=%d",n,r,result);
// return 0;
// }


// }
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    if(num == 0) {
        return 1;
    } else {
        return num * factorial(num-1);
    }
}

int main() {
    int n, r, nCr;
    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);
    nCr = factorial(n) / (factorial(r) * factorial(n-r));
    printf("%dC%d = %d\n", n, r, nCr);
    return 0;
}
