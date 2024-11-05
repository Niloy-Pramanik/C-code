#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the string
    str[strcspn(str, "\n")] = '\0';

    // Output the words in the string
    printf("Words in the string:\n");
    i = 0;
    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ') {
            i++;
        }
        // Output the current word
        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            printf("%c", str[i]);
            i++;
            j++;
        }
        // Move to the next line
        if (j > 0) {
            printf("\n");
        }
    }

    return 0;
}
