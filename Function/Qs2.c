#include<stdio.h>
void printvalue(char value){
printf("Value received from main: %c %c\n",value);
}

int main(){
    char value1;
    char value2;
    printf("Enter the value: ");
    scanf("%c",&value1);
      scanf("%c",&value2);
    printvalue(value1);
  
    printvalue(value2);
    return 0;
}