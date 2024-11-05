#include <stdio.h>

int main() {   //_1,_22
    int n, i, j, k;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf("_");
        }
        for(k = 1; k <= i; k++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

