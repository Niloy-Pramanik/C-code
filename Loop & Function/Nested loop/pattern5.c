// #include<stdio.h>
// int main()
// {
// int n;
// printf("Enter a number: ");
// for(int i=1;i<=n;i++){
//     for(int j=n;j>=1;j--){
//         if(j>i){
//             printf("%d",i);
//         }
//         else{
//             printf("%d",j);
//         }
//     }
//     printf("\n");
// }
// return 0;


// }
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            if (j > i) {
                printf("%d", j);
            } else {
                printf("%d", i);
            }
        }
        printf("\n");
    }
    return 0;
}
