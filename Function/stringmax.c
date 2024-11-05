// #include <stdio.h>
// #include <string.h>

// #define MAX_SIZE 100

// char getMaxOccurringChar(char str[]) {
//     int count[256] = {0}; // Initialize count array with all zeros
//     int length = strlen(str); // Get the length of the string
//     int maxCount = 0; // Initialize the maximum count to zero
//     char maxChar = '\0'; // Initialize the maximum occurring character to null

//     // Traverse the string and update the count of each character
//     for (int i = 0; i < length; i++) {
//         count[str[i]]++;
//     }

//     // Traverse the count array and find the character with maximum count
//     for (int i = 0; i < length; i++) {
//         if (count[str[i]] > maxCount) {
//             maxCount = count[str[i]];
//             maxChar = str[i];
//         }
//     }

//     return maxChar;
// }

// int main() {
//     char str[MAX_SIZE];
//     printf("Enter a string: ");
//     fgets(str, MAX_SIZE, stdin);
//     char maxChar = getMaxOccurringChar(str);
//     printf("The maximum occurring character in the string is '%c'\n", maxChar);
//     return 0;
// }
#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256 // Assuming ASCII characters only

char findMaxOccurringChar(char *str) {
    int freq[ASCII_SIZE] = {0};
    int len = strlen(str);
    char maxChar = '\0';
    int maxFreq = -1;

    // Count frequency of each character in the string
    for (int i = 0; i < len; i++) {
        freq[(int) str[i]]++;
    }

    // Find the character with maximum frequency
    for (int i = 0; i < len; i++) {
        if (maxFreq < freq[(int) str[i]]) {
            maxChar = str[i];
            maxFreq = freq[(int) str[i]];
        }
    }

    return maxChar;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("The maximum occurring character is '%c'.\n", findMaxOccurringChar(str));
    return 0;
}
