#include <stdio.h>
void main(){

int n;
printf("Enter the number: ");
scanf("%d",&n);
int a=1;
for(int i=2;i<=n;i++){
    if(n%i==0){
    a= 0;
    }
    if(a==1){
        printf("Prime number");
    }

}
    else{
        printf("nonprime number");
}



}