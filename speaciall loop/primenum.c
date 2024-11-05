#include <stdio.h>
int main()
{ 
    
int n,a,b,sum;
printf("Input starting number of range: ");
scanf("%d",&a);
printf("\nInput ending number of range: ");
scanf("%d",b);
for(n=a;n<b;n++ ){
    a=0;
    for(int i=2;i<=n/2;i++){

        if(n%i==0){
            a++;
            break;
        }
    }
    if()
}

return 0;

}