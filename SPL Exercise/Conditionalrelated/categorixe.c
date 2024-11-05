#include<stdio.h>
int main()
{
char alphabet;
printf("Enter the number,alphabet:  ");
scanf("%c",&alphabet);

 if((alphabet>='A'&& alphabet<= 'Z')||(alphabet>='a'&&alphabet<='z')){
    printf("Alphabet");
 }

    else if(alphabet>='0'&&alphabet<='9'){
    printf("Digit");

}
else{
    printf("Speacial ");
}
return 0;


}