#include <stdio.h>
int main()
{
    int hours,minutes,time;
    printf("Input hours:");
    scanf("%d",&hours);
    printf("Input minutes:");
    scanf("%d",&minutes);
    time=(hours*60)+ minutes;
    printf("Time : %d",time);
    return 0;
}