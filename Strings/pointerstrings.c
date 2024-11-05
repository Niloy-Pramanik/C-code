#include<stdio.h>
void printstring(char arr[]);
int main(){

char *canchange="Hello world";
puts(canchange);
canchange="Hello";
puts(canchange);
canchange="Love";
puts(canchange);

return 0;



}