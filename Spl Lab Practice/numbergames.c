#include <stdio.h>

int main() {  //numbers game
    int x, n, guess, chances;
    printf("Enter the number X: ");
    scanf("%d", &x);
    printf("Enter the number of tries N: ");
    scanf("%d", &n);

    for (chances = n; chances > 0; chances--) {
        printf("Enter your guess (chances left: %d): ", chances);
        scanf("%d", &guess);
        if (guess == x) {
            printf("Right, Player-2 wins!\n");
            break;
        }
        else {
            printf("Wrong, %d Choice(s) Left!\n", chances-1);
        }
    }

    if (chances == 0) {
        printf("Player-1 wins!\n");
    }

    return 0;
}
