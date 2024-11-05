#include <stdio.h>
int main()
// {
//     int n;
//     printf("Enter Number:");
//     scanf("%d",&n);
//    if(n==9){
//     printf("Nine");   
// }
// else if (n==0)
// printf("zero");
// else("Wrong number");
// return 0;
// }
{
    int digit;
    printf("Enter the number(0-9):");
    scanf("%d",&digit);
    switch (digit)
    {
    case 0:
    printf("Zero");
        break;
         case 1:
    printf("one");
        break;
         case 2:
    printf("Two");
        break;
         case 3:
    printf("Three");
        break;
         case 4:
    printf("Four");
        break;
         case 5:
    printf("Five");
        break;
         case 6:
    printf("Six");
        break;
         case 7:
    printf("Seven");
        break;
         case 8:
    printf("Eight");
        break;
         case 9:
    printf("Nine");
        break;
        
     
    default:printf("Invalid number\n");
        break;
    }







    return 0;
}