#include<stdio.h>
void printname(char str[]);
int printlength(char str[]);
int main(){
char name[100];
printf("Enter the string: ");
fgets(name,100,stdin);
printf("length is %d: ",printlength(name));

return 0;
}
int printlength(char str[]){
    for(int i=0;str[i] !='\0',i++){
        int count=0;
        count++;
    }
    return count-1;
}
