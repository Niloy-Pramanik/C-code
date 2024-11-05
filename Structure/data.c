#include <stdio.h>

struct Student {
    char name[50];
    int studentID;
    float cgpa;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter student ID: ");
        scanf("%d", &students[i].studentID);

        printf("Enter CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    printf("\nDetails of students:\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d: %s\n", i+1, students[i].name);
        printf("Student ID: %d\n", students[i].studentID);
        printf("CGPA: %.2f\n", students[i].cgpa);
    }

    return 0;
}

