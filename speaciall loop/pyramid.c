#include <stdio.h>
void main()

{

int j,spc,rows,k;
printf("Input the numbers of rows:");
scanf("%d",&rows);
spc=rows+4-1;
for(int i=1;i<=rows;i++){

    for(k=spc;k>=1;k--){
       
       printf(" ");
}
for(int j=1;j<=i;j++)
    printf("%d ",i);
    printf("\n");
    spc--;
}


return 0;
}
