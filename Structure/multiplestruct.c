 #include<stdio.h> 

struct address{
    int houseno;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);
int main(){
struct address adds[5];

printf("Enter info for person 1: ");
scanf("%d",&adds[0].houseno);
scanf("%d",&adds[0].block);
scanf("%s",adds[0].city);
scanf("%s",adds[0].state);

printf("Enter info for person 2: ");
scanf("%d",&adds[1].houseno);
scanf("%d",&adds[1].block);
scanf("%s",adds[1].city);
scanf("%s",adds[1].state);

printf("Enter info for person 3: ");
scanf("%d",&adds[2].houseno);
scanf("%d",&adds[2].block);
scanf("%s",adds[2].city);
scanf("%s",adds[2].state);

printf("Enter info for person 4: ");
scanf("%d",&adds[3].houseno);
scanf("%d",&adds[3].block);
scanf("%s",adds[3].city);
scanf("%s",adds[3].state);

printf("Enter info for person 5: ");
scanf("%d",&adds[4].houseno);
scanf("%d",&adds[4].block);
scanf("%s",adds[4].city);
scanf("%s",adds[4].state);

printAdd(adds[0]);
printAdd(adds[1]);
printAdd(adds[2]);
printAdd(adds[3]);
printAdd(adds[4]);

return 0;

}

void printAdd(struct address add){
    printf("Address is : %d, %d, %s, %s\n ",add.houseno,add.block,add.city,add.state);
     
}