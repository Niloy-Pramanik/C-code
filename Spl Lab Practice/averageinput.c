// #include <stdio.h>

// int main() {  //average 
//     int n, i;
//     float num, sum = 0, avg;
    
//     printf("Enter the number of inputs: ");
//     scanf("%d", &n);
    
//     for (i = 1; i <= n; i++) {
//         printf("Enter input %d: ", i);
//         scanf("%f", &num);
//         sum += num;
//     }
    
//     avg = sum / n;
    
//     printf("AVG of %d inputs: %f", n, avg);
    
//     return 0;
// }


#include<stdio.h>
int main()
{
int n;
float num,sum=0,avg;
printf("Enter the number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("enter %d: ",i);
    scanf("%f",&num);
    sum+=num;
}
avg=sum/n;
printf("AVG of %d inputs: %f",n,avg);
return 0;


}
