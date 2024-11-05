#include<stdio.h>
int T(int n){
if(n==1){
    return 1;
}
else{
    return 2*T(n-1)+1;
}

}
int main(){
    int n,result;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=T(n);
    printf("the %dth term recursion is: %d\n",n,result);
    return 0;
}