#include <stdio.h>

int str_length(char* str) {
    int length = 0;
    while (*(str + length) != '\0') {
        length++;
    }
    return length;
}

int find_substr(char* a, char* b) {
    int length_a = str_length(a);
    int length_b = str_length(b);
    int i, j;
    for (i = 0; i <= length_a - length_b; i++) {
        for (j = 0; j < length_b; j++) {
            if (*(a + i + j) != *(b + j)) {
                break;
            }
        }
        if (j == length_b) {
            return 1;
        }
    }
    return -1;
}

int main() {
    char a[100], b[100];
    printf("Enter two strings: ");
    scanf("%s %s", a, b);
    int result = find_substr(a, b);
    printf("%d\n", result);
    return 0;
}
