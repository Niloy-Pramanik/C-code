#include <stdio.h>

int main() { //palindrome
    int num, temp, digit, reversed = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    if(num == reversed) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
