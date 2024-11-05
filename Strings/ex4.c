#include<stdio.h>
int main(){
char str[100];
int count=0;
printf("Enter the string: ");
scanf("%[^\n]s",&str);

for(int i=0;str[i] !='\0';i++){
    if(str[i]==' '){
        count++;
    }
}
count++;
printf("Number of word: %d\n",count);

return 0;


}