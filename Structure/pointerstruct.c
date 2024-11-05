#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];

};

int main(){
struct student s1={508,4.00,"Niloy"};
printf("Student roll= %d\n",s1.roll);

struct student *ptr=&s1;
printf("Student roll= %d\n",(*ptr).roll);  //pointer through roll

return 0;



}



//passing function structure
 