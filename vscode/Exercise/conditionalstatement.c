#include <stdio.h>
int main()
// uses of if-else to detect age
{
    int age;
    printf ("Enter age:");
    scanf("%d",&age);
    if("age > 18"){
        printf("adult \n");
        printf("they can vote \n");
        printf ("they can drive \n");
    }
    else{
        printf ("not adult \n");
    }
    printf("thank you");
    return 0;
}