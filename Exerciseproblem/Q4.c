#include <stdio.h>
int main()
// relational operators
{
    char cha;
    printf("Enter the alphabet:");
    scanf("%c", &cha);
    if (cha>= 'A' && cha <= 'Z'){
printf("Uppercase \n");

    }
 if  (cha >= 'a' && cha <= 'z'){

    printf("lowercase \n"); 
}
else {
    printf("not english letter :Thank you \n");
}
return 0;
}