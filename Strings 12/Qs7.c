#include <stdio.h>
#include <ctype.h>

int is_palindrome(char *input_str);

int main() {
    char input_str[100];
    printf("Enter a string: ");
    fgets(input_str, 100, stdin);
    
    if (is_palindrome(input_str)) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}

int is_palindrome(char *input_str) {
    // Remove non-alphanumeric characters and convert to lowercase
    char str[100];
    int len = 0;
    for (int i = 0; input_str[i] != '\0'; i++) {
        if (isalnum(input_str[i])) {
            str[len++] = tolower(input_str[i]);
        }
    }
    str[len] = '\0';
    
    // Compare the original string with its reversed version
    int i = 0;
    int j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
