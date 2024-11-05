#include<stdio.h>
struct student{
    char name[100];
    char ID[50];
    float cgpa;
};
int main(){
    struct student s1;
    printf("%s\n",s1.name);
    printf("%s\n",s1.ID);
    printf("%.2f\n",s1.cgpa);
    return 0;
}