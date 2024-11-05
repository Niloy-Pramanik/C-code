#include <stdio.h>

int calculateSum(int n) {
    int sum = 0;
    int number;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        sum += number;
    }
    
    printf("Sum In Function: %d\n", sum);
    
    return sum;
}

int main() {
    int n1 = 3;
    int sum1 = calculateSum(n1);
    printf("Sum In Main: %d\n", sum1);
    
    int n2 = 2;
    int sum2 = calculateSum(n2);
    printf("Sum In Main: %d\n", sum2);
    
    return 0;
}
