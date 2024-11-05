
#include<stdio.h>
void positive_or_negative(int n){
if(n>0){
    printf("%d is positive\n",n);
}
else if(n<0){
    printf("%d is negative\n",n);
}
else if(n==0){
    printf("%d is zero\n",n);
}
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    positive_or_negative(n);
    return 0;

}



