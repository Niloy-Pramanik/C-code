#include<stdio.h>
#include<math.h>
struct point{
    float x;
    float y;

};
int main(){
struct point n1,n2;
float distance;

printf("Enter coordinate of point 1: ");
scnaf("%f %f",&n1.x,&n2.y);

printf("Enter coordinate point 2: " );
scanf("%f %f",&n2.x,&n1.y);

distance=sqrt(pow(n2.x- n1.x,2)+ pow(n2.y-n1.y,2));
printf("The distance is %.2f units\n",distance);
return 0;




}
