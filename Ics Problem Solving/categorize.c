#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter the input:\n");
    scanf("%c",&alpha);
    if((alpha>= 'a'&& alpha<= 'z') || (alpha>= 'A' && alpha<= 'Z')){
        printf("'%c' is Alphabet",alpha);
    }
        else if(alpha >='0' && alpha <='9'){
            printf("'%c'is Digit",alpha);
        }
        else{
            printf("'%c'is speacial charecter",alpha);
        }
    return 0;
}