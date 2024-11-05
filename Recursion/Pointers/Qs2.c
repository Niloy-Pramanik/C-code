// #include<stdio.h>
// int main(){
// int n1,n2;
// int *x1,*x2;
// printf("Enter first number: ");
// scanf("%d",&n1);
// printf("Enter second number: ");
// scanf("%d",&n2);
// int N=*x1;
// *x1=*x2;
// *x2=N;

// printf("The swap number is: %d",n1,n2);
// return 0;





// }

#include<stdio.h>
void swap(int n1,int n2);
void _swap(int*n1,int *n2 );
int main(){
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    _swap(&n1,&n2);
printf("X = %d & y= %d\n",n1,n2);
    //printf("Before swapping: num1 = %d, num2 = %d\n", n1, n2);

    return 0;


}
// call by reference
void _swap(int *n1,int *n2){
    int t=*n1;
    *n1=*n2;
    *n2=t;
}

void swap(int n1,int n2){
    int t=n1;
    n1=n2;
    n2=t;

    printf("n1=%d & n2=%d",n1,n2);


}