// #include<stdio.h>
// #include<math.h>
// int main()
// {
// int n,sum;
// printf("Enter the number: ");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     sum+=pow(i*i)*n;
//     printf("Results: %d",i,n,sum);
// }
// return 0;


// }
#include <stdio.h>
#include<math.h>

int main() {  //1^.2+2^2.3+....
    int n, i;
    float sum = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum +=i*(i+n);
    }
    
    printf("Result: %.0f", sum);
    
    return 0;
}
