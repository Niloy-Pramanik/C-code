#include<stdio.h>   
#include <math.h> #define PI 3.141  
// circle radius calculation
int main()   
{  
    float radius, area;  
    printf("Enter radius of circle\n");  
    scanf("%f", & radius);  
    area = 3.14 * radius * radius;  
    printf("Area of circle : %0.3f\n", area);    
    return 0;
}