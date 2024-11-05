#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countlength(char arr[]);

int main(){
char name[]="Niloy";
printf("Length is: %d",strlen(name));
return 0;

}
int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i] !='\0';i++){
        count++;
    }
    return count-1;

}