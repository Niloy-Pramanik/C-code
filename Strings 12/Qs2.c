#include <stdio.h>

int main() {
    char letter, toggled_letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
        if (letter >= 'a' && letter <= 'z') {
            toggled_letter = letter - ('a' - 'A');
        }
        else {
            toggled_letter = letter + ('a' - 'A');
        }
        printf("The toggled case of %c is %c.\n", letter, toggled_letter);
    }
    else {
        printf("Wrong input.\n");
    }

    return 0;
}
