// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the value: ");
// scanf("%d",&n);
// if(n>='0' && n<='9'){
//     printf("The numerical representation of %c is %d.\n",n,n-'0');
// }
// else{
//     printf("Wrong input.\n");
// }


// return 0;
// }
#include <stdio.h>

int main() {
    char digit;

    printf("Enter a digit: ");
    scanf("%c", &digit);

    if (digit >= '0' && digit <= '9') {
        printf("The numerical representation of %c is %d.\n", digit, digit - '0');
    }
    else {
        printf("Wrong input.\n");
    }

    return 0;
}
