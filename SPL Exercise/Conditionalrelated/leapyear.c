// #include<stdio.h>
// int main()
// {
// int n,year;
// printf("Enter a year: ");
// scanf("%d",&n);
// if(( year % 4 == 0 && year % 100 != 0 )||( year% 400==0)){
//     printf("Yes leapyear");
// }
// else{
//     printf("Not leapyear");
// }
// return 0;

// }
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: \n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
