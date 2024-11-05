#include<stdio.h>
int main()
{
    float kmph,miph;
    printf("Input kilometers:");
    scanf("%f",&kmph);

   miph= (kmph*0.6213);
printf("%f miles per hour\n", miph);

   
    return 0;

}