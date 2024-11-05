// #include <stdio.h>

// int main() {
//     char str[100];
//     int i = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     while (str[i] != '\0') {
//         if (str[i] >= 'A' && str[i] <= 'Z') {
//             str[i] = str[i] + 32; // convert uppercase to lowercase
//         }
//         i++;
//     }

//     printf("Converted string: %s", str);

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // convert uppercase letters to lowercase using the strlwr function
//     strlwr(str);

//     printf("Converted string: %s", str);

//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter a string: ");
fgets(str,100,stdin);
strlwr(str);
printf("%s",str);

return 0;




}