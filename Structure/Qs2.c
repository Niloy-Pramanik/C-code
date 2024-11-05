#include<stdio.h>
struct student{
char name[100];
int student_Id;
float cgpa;

};
int main(){
    int n;
    printf("Enter the number of student: ");
    scanf("%d",&n);
struct student str[n];
for(int i=0;i<n;i++){
    printf("Enter students details %d:\n",i+1);

    printf("Enter name: ");
    scanf("%s",str[i].name);

    printf("Enter student ID: ");
    scanf("%d",str[i].student_Id);

    printf("Enter CGPA: ");
    scanf("%f",str[i].cgpa);


}
printf("Details of student: ");

for(int i=0;i<n;i++){
        printf("Student name: %s\n",str[i].name);
        printf("Student ID: %d\n",str[i].student_Id);
        printf("CGPA: %.2f\n",str[i].cgpa);


}

return 0;


}
