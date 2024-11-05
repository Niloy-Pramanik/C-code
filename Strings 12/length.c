#include<stdio.h>

void printname(char str[]);
int printlength(char str[]);

int main(){
printf("Enter the length: ");
char name[100];
fgets(name,100,stdin);
printf("The length is: %d",printlength(name));
return 0;

}
int printlength(char str[]){
    int count=0;
    for(int i=0;str[i] !='\0';i++){
    count++;

    }
    return count-1;
}
void printname(char str[]){
    for(int i=0;str[i] !='\0';i++){
        printf("%c",str[i]);
    }
    printf("\n");
    
}