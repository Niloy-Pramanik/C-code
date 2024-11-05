#include <stdio.h>
#include <math.h>

int main() {   //reversed print
    int num, sum = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        sum = sum * 10 + digit;
        num /= 10;
    }
    printf("Reversed number: %d", sum);
    return 0;
}
