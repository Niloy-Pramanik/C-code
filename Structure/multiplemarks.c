#include<stdio.h>
 typedef struct BankAccount{
    int accountno;
    char name[100];


 }acc;

 int main(){
    acc acc1={123,"Niloy"};
    acc acc2={124,"Assho"};
    acc acc3={125,"Shoumik"};

    printf("acc no= %d\n",acc1.accountno);
    printf("name= %s\n",acc1.name);
    return 0;

 }