// #include<stdio.h>
// void printname(char arr[]);
// int printlength(char arr[]);
// int main(){
// char name[100];
// fgets(name,100,stdin);
// printf("The length is: %d",printlength(name));

// return 0;

// int printlength(char arr[]){
     
//      int count=0;
//      for(int i=0;arr[i] !='\0';i++){
//         count++;
//      }
//      return count-1;
// }




// }
#include<stdio.h>
void namelength(char arr[]);
int countlength(char arr[]);
int main(){
char name[100];
fgets(name,100,stdin);
printf("Length is: %d",countlength(name));

return 0;


}
int countlength(char arr[]){
    printf("Enter the string: ");
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}