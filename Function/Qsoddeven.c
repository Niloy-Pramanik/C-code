// // #include<stdio.h>
// // void printnumber(int n);
// // int main(){
// //     int num;
// // printf("Enter a number: ");
// // scanf("%d",&num);
// // return 0;

// // }
// // void printnumber(int n){
// //     if(num%2==0){
// //         printf("%d is Even\n",num);
// //     }
// //     else{
// //         printf("%d is Odd\n",num);
// //     }
// // }


// #include<stdio.h>
// void printnumber(int n){
//     if(n%2==0){
//         printf("%d is even\n",n);
//     }
//     else{
//         printf("%d is odd\n",n);
//     }
// }
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     return 0;
//     printnumber(n);
// }
#include <stdio.h>

void even_or_odd(int num) {
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    even_or_odd(num);

    return 0;
}
