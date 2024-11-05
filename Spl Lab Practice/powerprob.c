#include <stdio.h>
#include <math.h>

int main() {
    int x, y, result = 1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    printf("%d^%d = %d", x, y, result);
    return 0;
}
