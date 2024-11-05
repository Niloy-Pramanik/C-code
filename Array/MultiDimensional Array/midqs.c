// // // #include<stdio.h>
// // // int main(){
// // // int n,sum=0;
// // // printf("Enter a number: ");
// // // scanf("%d",&n);
// // // for(int i=1;i<n;i++){


// // // }



// // // }
// // #include <stdio.h>

// // int main() {
// //     int n, sum = 0, sign = 1;

// //     printf("Enter the number of terms: ");
// //     scanf("%d", &n);

// //     for (int i = 1; i <= n; i++) {
// //         sum += i * sign;
// //         sign = -sign;
// //     }

// //     printf("The sum of the series is %d\n", sum);

// //     return 0;
// // }
// #include<stdio.h>
// int main()
//     {
//        int n;
//        printf("Enter a number: ");
//        scanf("%d",&n);
    
//        for(int i=n;i>=1;i--){
//         for(int j=i*2;j>=2;j-=2){
//             printf("%d ",j);
//         }
        
//         printf("\n");
       

        
//        }
    
//        return 0;



//     }
#include<stdio.h>
int main()
{
int num;
int sum=0,i=10,j=5;
scanf("%d",&num);
switch(num){
    case 1:
    sum=2*i++;
    j++;
    case 2:
    sum=2*j--;
    i++;
    break;
    case 3:
    sum=++i*j--;
    case 4:
    sum=i++*j--;
    default:
    sum=0;
    i=0;
    j=0;
}
printf("%d %d %d",i,j,sum);
return 0;



}
























