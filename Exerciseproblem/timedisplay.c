#include<stdio.h>
int main()
{
    int min,hour;
    printf("Input minutes:");
    scanf("%d",&hour, &min);
    hour=(hour/60);
    min=(min%60);
    printf("%d hours ,%d minute\n",hour,min);


return 0;

}