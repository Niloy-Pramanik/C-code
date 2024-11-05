#include<stdio.h>

float converttemp(float celcious){
    float far= celcious*(19/5)+32;
    return far;
}
int main(){
    float far=converttemp(0);
    printf("far: %0.2f",far);

    return 0;
}