// #include<stdio.h>
// int main()
// {
// int n,sum=0;
// printf("Enter the number: ");
// scanf("%d",&n);
// printf("1 ");
// for(int i=1;i<=n;i++){
// sum+=n+i;
// printf("%d ",sum);

// }
// return 0;

// }
#include <stdio.h>

int main() {    //febonacci series
    int n, i,prev1 = 1, prev2 = 1, current; // variables to store previous terms and current term;
     
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    // printing the first two terms of the series
    printf("Fibonacci series up to %dth term:\n", n);
    printf("%d %d ", prev1, prev2);
    
    // calculating and printing the Fibonacci series up to Nth term
    for (i = 3; i <= n; i++) {
        current = prev1 + prev2;
        printf("%d ", current);
        prev1 = prev2;
        prev2 = current;
    }
    
    return 0;
}
