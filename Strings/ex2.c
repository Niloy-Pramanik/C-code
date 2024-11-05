// #include<stdio.h>
// void printname(char arr[]);
// int main(){
// char name[100];
// fgets(name,100,stdin);
// printf("The output is : %c",printname(name));



// }
#include <stdio.h>

int main() {
   char str1[100], str2[100], result[200];
   int i, j;

   printf("Enter first string: ");
   scanf("%[^\n]s", str1);

   printf("Enter second string: ");
   scanf(" %[^\n]s", str2);

   // concatenate str1 and str2 into result
   for (i = 0; str1[i] != '\0'; i++) {
      result[i] = str1[i];
   }

   for (j = 0; str2[j] != '\0'; j++) {
      result[i+j] = str2[j];
   }

   // add null character to end of result
   result[i+j] = '\0';

   printf("Concatenated string: %s\n", result);

   return 0;
}
