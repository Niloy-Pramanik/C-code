#include<stdio.h>
void printfactorial(int n){
for(int i=1;i<=n;i++){
    int fact=1;
    fact=fact*i;
    printf("%d",fact);
}

}
int main(){
printf("Enter a number: ");
int n;
scanf("%d",&n);
printfactorial(n);
return 0;


}