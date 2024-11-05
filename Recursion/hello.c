#include<stdio.h>
void print(int count);

int main(){
printHW(10);
return 0;

}
//recursive function
void printHW(int count){
    if(count==0){
        return;
    }
    printf("HEllo world\n");
    printHW(count-1);
} 