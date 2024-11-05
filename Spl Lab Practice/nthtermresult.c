#include <stdio.h>

int main() {   //Nth term - 1,-2,3,-4,5
    int n, sum = 0, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    for (i = 1; i<=n; i++) {
        if (i % 2 == 1) {
            sum += i;
        } else {
            sum -= i;
        }
    }
    
    printf("Result: %d\n", sum);
    
    return 0;
}
