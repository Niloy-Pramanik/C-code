// #include<stdio.h>
// void printHello();
// void printGoodbye();
// int main(){
// printHello();
// printHello();
// printHello();
// printGoodbye();
// printGoodbye();
// printGoodbye();
// return 0;

// }
// void printHello(){
//     printf("Hello!\n");

// }
// void printGoodbye(){
//     printf("Goodbye!\n");
// }

#include<stdio.h>
void Namaste();
void Bonjour();
int main(){
printf("Enter f for french & i for Indian: ");
char ch;
scanf("%c",&ch);
if(ch=='i'){
    Namaste();
}
else{
    Bonjour();
}
return 0;

}

void namaste(){
    printf("Namaste!\n");
}
void bonjour(){
    printf("Bonjour!\n");
}




 