#include<stdio.h>
int main()
{
     for (int i=1; i<=10; i++){
         if(i==10){
            continue; //skip
        }
        printf("%d \n",i);
    }
int n; //print odd number
printf("Enter all odd number(5-50):");
for(int i=5;i<=50;i++ ){
    if(i%2 !=0){
        printf("%d \n",i);
    }

}







    return 0;
}
