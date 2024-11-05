#include <stdio.h>
int main()
{
    int age;
    printf ("Enter the age:\n");
    scanf("%d \n",&age);
    if (age >= 18){
        printf("adult \n");
    }
    else if (age > 13 && age < 18){
        printf("teenager \n");

    }
    else{
        printf("child \n");
    }
    return 0; 
}