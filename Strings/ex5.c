//  #include<stdio.h>
//  int main(){|
 
// char str[];
// printf("Enter the string: ");
// scanf("%[^\n]s",&str);
// for(int i=0;str[i] !='\0';i--){

// }
// printf("the inverse string is: %s\n",str);

//  return 0;
 
 
 
//  }

#include <stdio.h>

void reverse_string(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n' && i < 99) {
        i++;
    }
    str[i] = '\0';

    reverse_string(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
