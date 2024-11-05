#include <stdio.h>

int main() {
    int n, i, j, count = 1;  //input=3 output=1,23,345,,,
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", count++);
        }
        printf("\n");
    }
    return 0;
}
