#include <stdio.h>

int main() {
    char uppercase_letter, lowercase_letter;

    printf("Enter an uppercase letter: ");
    scanf("%c", &uppercase_letter);

    if (uppercase_letter >= 'A' && uppercase_letter <= 'Z') {
        lowercase_letter = uppercase_letter + ('a' - 'A');
        printf("The lowercase version of %c is %c.\n", uppercase_letter, lowercase_letter);
    }
    else {
        printf("Wrong input.\n");
    }

    return 0;
}
