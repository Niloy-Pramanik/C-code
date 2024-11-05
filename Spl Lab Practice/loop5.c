#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    while (x != y) {
        printf("%d, ", x*x);
        if (x < y) {
            x++;
        } else {
            x--;
        }
    }

    printf("Reached!\n");
    return 0;
}
