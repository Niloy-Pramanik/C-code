#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    scanf("%s",s1.name);
    scanf("%d",s1.roll);
    scanf("%f",s1.cgpa);

    printf("%s\n,%d\n,%f\n",s1.name,s1.roll,s1.cgpa);
    return 0;
}
