#include <stdio.h>

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Function to calculate the LCM of two numbers
int lcm(int a, int b) {
    return (a*b) / gcd(a, b);
}

int main() {
    int num1, num2, GCD, LCM;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    GCD = gcd(num1, num2);
    LCM = lcm(num1, num2);
    printf("GCD: %d\n", GCD);
    printf("LCM: %d\n", LCM);
    return 0;
}
