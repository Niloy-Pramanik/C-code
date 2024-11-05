#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
    };
int main(){
// struct student ece[100];
// ece[0].roll=508;
// ece[0].cgpa=4.00;
// strcpy(ece[0].name,"Niloy");
struct student ece= {508,4.00,"Niloy"};
printf("Student name= %s\n",ece.name);
printf("Student roll= %d\n",ece.roll);
printf("Student CGPA= %.2f\n",ece.cgpa);
return 0;

}