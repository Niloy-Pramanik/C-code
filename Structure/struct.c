#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];  
};
 
int main(){
struct student s1;
s1.roll=508;
s1.cgpa=4.00;

strcpy(s1.name,"Niloy");

printf("Student name= %s\n",s1.name);
printf("Student roll= %d\n ",s1.roll);
printf("Student CGPA= %.2f\n",s1.cgpa);

return 0;


}