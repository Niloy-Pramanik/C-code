#include<stdio.h>
#include<string.h>

//user defined
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu;

typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main(){
    coe s1;
    s1.roll=508;
    s1.cgpa= 4.00;
    strcpy(s1.name,"Niloy");

    printf("Student name is: %s\n",s1.name);
     printf("Student name is: %d\n",s1.roll);
      printf("Student name is: %.2f\n",s1.cgpa);
    return 0;
}