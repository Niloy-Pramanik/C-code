// #include<stdio.h>
// int main()
// {
// int n,fact;
// printf("Enter the number: ");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     fact=fact*n;
//     printf("%d ",n,fact);
// }
// return 0;


// }
#include <stdio.h>

int main() {
  int n, i;
  unsigned long long factorial = 1;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // Error checking for negative numbers
  if (n < 0) {
    printf("Error: Factorial of negative numbers is undefined.");
  }
  else {
    for (i = 1; i <= n; i++) {
      factorial *= i;
    }

    printf("%d! = ", n);
    for (i = n; i >= 1; i--) {
      printf("%d", i);
      if (i != 1) {
        printf(" X ");
      }
    }
    printf(" = %llu", factorial);
  }

  return 0;
}
