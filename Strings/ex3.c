// #include<stdio.h>
// void printname(char arr[]);
// int printvowel (char arr[]);
// int main(){
// char name[100];
// printf("Enter the sentence: ");
// fgets(name,100,stdin);
// printf("The number of vowel: %d",printvowel(name));
// return 0;

// }
// int printvowel(char arr[]){
//     int count=0;
//     for(int i=0;arr[i] !='\0';i++){
//         if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' ||arr[i]=='u' ||
//         arr[i]=='A'|| arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){

//         }
//         count++;
      
//     }
//     return count-1;
// }

#include <stdio.h>

int main() {
   char str[100];
   int i, count = 0;

   printf("Enter a string: ");
   scanf("%[^\n]s", str);

   // count vowels in string using loop
   for (i = 0; str[i] != '\0'; i++) {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
          str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
          str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
          str[i] == 'U') {
         count++;
      }
   }

   printf("Number of vowels in string: %d\n", count);

   return 0;
}
