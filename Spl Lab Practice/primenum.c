// #include <stdio.h>
// void main(){

// int n;
// printf("Enter the number: ");
// scanf("%d",&n);
// int isprime=1;
// for(int i=2;i<=n;i++){
//     if(n%i==0){
//     isprime= 0;
//     }
//     else if(isprime==1){
//         printf("Prime number");
//     }

// }
//  else{
//     printf("nonprime number");
// }



// }
#include <stdio.h>

int main() {  //prime or not prime
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum = 1;
            break;
        }
    }
    if (num == 1) {
        printf("Not prime\n");
    } else {
        if (sum == 0)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }
    return 0;
}
