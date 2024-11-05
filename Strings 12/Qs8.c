// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[100], str2[100];
//     int result;
    
//     printf("Enter the first string: ");
//     fgets(str1, 100, stdin);
    
//     printf("Enter the second string: ");
//     fgets(str2, 100, stdin);
    
//     result = strcmp(str1, str2);
    
//     if (result > 0) {
//         printf("%s", str1);
//     } else if (result < 0) {
//         printf("%s", str2);
//     } else {
//         printf("Both equal");
//     }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, flag = 0;
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    // Compare the strings character by character
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] < str2[i]) {
            printf("%s is lexicographically greater than %s\n", str2, str1);
            flag = 1;
            break;
        } else if (str1[i] > str2[i]) {
            printf("%s is lexicographically greater than %s\n", str1, str2);
            flag = 1;
            break;
        }
    }
    
    // If both strings are equal up to this point, then check their lengths
    if (!flag) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            printf("Both strings are equal\n");
        } else if (str1[i] == '\0') {
            printf("%s is lexicographically greater than %s\n", str2, str1);
        } else {
            printf("%s is lexicographically greater than %s\n", str1, str2);
        }
    }
    
    return 0;
}
