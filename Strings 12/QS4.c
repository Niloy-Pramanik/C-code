#include<stdio.h>
void printname(char str[]);
int printlength(char str[]);
int main(){
char name[100];
fgets(name,100,stdin);
printf("the length is: %d",printlength(name));
return 0;

}

int printlength(char str[]){
     int count=0;

    for(int i=0;str[i] !='\0';i++){
       
        count++;
    }
    return count-1;

}