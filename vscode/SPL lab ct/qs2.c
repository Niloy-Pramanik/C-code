#include <stdio.h>

int G(int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 2;
    } else {
        return 2 * G(n - 2) + 1;
    }
}

int main() {
    int n ;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("G(%d) = %d\n", n, G(n));
  
    return 0;
}