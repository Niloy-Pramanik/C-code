// #include<stdio.h>
// int main()
// {
// int n,i,sum=0,term=0;
// printf("Enter a number: ");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     term=term*10+i;
//     sum=term;

// }
// printf("The sum of the series up to %d terms is %d\n",n,sum);

// return 0;
// }
#include <stdio.h>

int main() {
    int n, i, j, term, sum = 0;  //1+12+123+1234+....
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        term = 0;
        for(j = 1; j <= i; j++) {
            term = term * 10 + j;
        }
        sum += term;
    }
    printf("Sum of the series: %d\n", sum);
    return 0;
}
