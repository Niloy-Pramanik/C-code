// #include <stdio.h>
// int main()
// {
//     char firstname[10],lastname[10];
//      int birth;
//      printf ("Enter your firstname: ");
    
//      scanf("%s ",&firstname);

//  printf("Input your last name :\n");
//     scanf("%s",&lastname);
   

//   printf ("Input your birth: \n");
//      scanf("%d",&birth);
  

//     printf(" %s %s %d \n",firstname,lastname,birth);
//     return 0;
// }
#include <stdio.h>
int main()
{
    char firstname[20], lastname[20];
    int bir_year;
    printf("Input your firstname: ");
    scanf("%s", firstname);
    printf("Input your lastname: ");
    scanf("%s", lastname);
    printf("Input your year of birth: ");
    scanf("%d", &bir_year);
    printf("%s %s %d\n", firstname, lastname, bir_year);
    return 0;
}
