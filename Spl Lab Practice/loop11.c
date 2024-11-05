#include <stdio.h>

int main() {
    int n;
    float  sum = 0; //1^2.2+2^.3...

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        sum += i*(i+1)+0.2*i;
    }

    printf("Result: %.0f\n", sum);
    return 0;
}
