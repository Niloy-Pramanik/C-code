#include<stdio.h>

int calculatesum(int n){
    int numbers[n];
    int sum=0;

    for(int i=0;i<n;i++){
        scanf("%d",&numbers[i]);
        sum+=numbers[i];

    }
    printf("Sum in function: %d\n",sum);
    return sum;
    }
int main() {
    int n1 = 3;
    int sum1 = calculateSum(n1);
    printf("Sum In Main: %d\n", sum1);
    
    int n2 = 2;
    int sum2 = calculateSum(n2);
    printf("Sum In Main: %d\n", sum2);
    
    return 0;
}
