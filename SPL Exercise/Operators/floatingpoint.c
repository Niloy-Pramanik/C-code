#include<stdio.h>
#include<math.h>
int main()
 {
// int x,sum;
// float y,sum;
// printf("Enter number: ");
// scanf("%d",&x);
// scanf("%f",&y);
// sum=x*y;
// sum=y*x;
// printf("Assignment:%f assigned to an int produces %d\n",x,y,sum);
// printf("Assignment:%d assigned to a float produces %f\n",x,y,sum);
// return 0;


// {
    int integer = -150;
    float floating = 123.125;
    
    // Assignment: floating assigned to an int
    integer = (int)floating;
    printf("Assignment: %f assigned to an int produces %d\n", floating, integer);
    
    // Assignment: integer assigned to a float
    floating = (float)integer;
    printf("Assignment: %d assigned to a float produces %f\n", integer, floating);
    
    // Type casting: int to float
    floating = (float)integer;
    printf("Type Casting: (float) %d produces %f\n", integer, floating);
    
    // Type casting: float to int
    integer = (int)floating;
    printf("Type Casting: (int) %f produces %d\n", floating, integer);
    
    return 0;
}



#include<stdio.h>
#include<math.h>
int main()
// {
// int x,sum;
// float y,sum;
// printf("Enter number: ");
// scanf("%d",&x);
// scanf("%f",&y);
// sum=x*y;
// sum=y*x;
// printf("Assignment:%f assigned to an int produces %d\n",x,y,sum);
// printf("Assignment:%d assigned to a float produces %f\n",x,y,sum);
// return 0;


{
    int x;
    float  y;
    printf("Enter the number: ");
    scanf("%d",&x);
    scanf("%f",&y);
    
    // Assignment: floating assigned to an int
    x = (int)y;
    printf("Assignment: %f assigned to an int produces %d\n", y, x);
    
    // Assignment: integer assigned to a float
    y = (float)x;
    printf("Assignment: %d assigned to a float produces %f\n", x,y);
    
    // Type casting: int to float
    y = (float)x;
    printf("Type Casting: (float) %d produces %f\n", x,y);
    
    // Type casting: float to int
    x = (int)y;
    printf("Type Casting: (int) %f produces %d\n", y,x);
    
    return 0;
}



