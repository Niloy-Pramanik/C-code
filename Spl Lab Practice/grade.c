
#include <stdio.h>

int main() {
    int n, i;
    float A, HW, CT, MT, TF, total;
    char grade;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 1; i <= N; i++) {
        printf("Enter marks for student %d\n", i);
        printf("Attendance (A) (out of 5): ");
        scanf("%f", &A);
        printf("Assignments (HW) (out of 10): ");
        scanf("%f", &HW);
        printf("Class Tests (CT) (out of 15): ");
        scanf("%f", &CT);
        printf("Midterm (MT) (out of 50): ");
        scanf("%f", &MT);
        printf("Final (TF) (out of 100): ");
        scanf("%f", &TF);
        total = (A / 5 * 0.05) + (HW / 10 * 0.1) + (CT / 15 * 0.15) + (MT / 50 * 0.3) + (TF / 100 * 0.4);
        if (total >= 0.9) {
            grade = 'A';
        } else if (total >= 0.86) {
            grade = 'A';
        } else if (total >= 0.82) {
            grade = 'B';
        } else if (total >= 0.78) {
            grade = 'B';
        } else if (total >= 0.74) {
            grade = 'B';
        } else if (total >= 0.70) {
            grade = 'C';
        } else if (total >= 0.66) {
            grade = 'C';
        } else if (total >= 0.62) {
            grade = 'C';
        } else if (total >= 0.58) {
            grade = 'D';
        } else if (total >= 0.55) {
            grade = 'D';
        } else {
            grade = 'F';
        }
        printf("Student %d has a grade of %c\n", i, grade);
    }
    return 0;
}
