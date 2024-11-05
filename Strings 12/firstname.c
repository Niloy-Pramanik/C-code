// #include<stdio.h>
// void printString(char arr[]);
// int main(){
// char name[50];
// scanf("%s",name);
// printf("Your name is: %s",name);
// return 0;

// }
// void printstring(char arr[]){
//     for(int i=0;arr[i] !='\0'; i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter the string: ");
char name[100];
fgets(name,100,stdin);
puts(name);
return 0;



}