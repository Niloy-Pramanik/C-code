// #include<stdio.h>
// #include<string.h>

// int main() {
//     char str1[100], str2[100];
//     printf("Enter the first string: ");
//     fgets(str1, sizeof(str1), stdin);
//     printf("Enter the second string: ");
//     fgets(str2, sizeof(str2), stdin);

//     str1[strcspn(str1, "\n")] = 0; // Remove newline character from str1
//     str2[strcspn(str2, "\n")] = 0; // Remove newline character from str2

//     strcat(str1, str2); // Concatenate str2 to the end of str1

//     printf("Concatenated string: %s\n", str1);

//     return 0;
// }

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Find the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Copy the contents of str2 to the end of str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Terminate the concatenated string with null character
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}

