// #include <stdio.h>

// int main() {
//     char str[100];
//     int i = 0;

//     printf("Enter a string: ");
//     fgets(str, 100, stdin);

//     while (str[i] != '\0') {
//         if (str[i] >= 'A' && str[i] <= 'Z') {
//             str[i] = str[i] + 32; // convert uppercase to lowercase
//         } else if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - 32; // convert lowercase to uppercase
//         }
//         i++;
//     }

//     printf("Toggled case string: %s", str);

//     return 0;
// }


#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int id;
    float cgpa;
};

int main() {
    struct student s1, s2;
    printf("Enter information for student 1:\n");
    printf("Name: ");
    scanf("%[^\n]%*c", s1.name);
    printf("ID: ");
    scanf("%d", &s1.id);
    printf("CGPA: ");
    scanf("%f", &s1.cgpa);

    printf("Enter information for student 2:\n");
    printf("Name: ");
    scanf("%[^\n]%*c", s2.name);
    printf("ID: ");
    scanf("%d", &s2.id);
    printf("CGPA: ");
    scanf("%f", &s2.cgpa);

    if(s1.cgpa > s2.cgpa) {
        printf("Student 1 has the higher CGPA.\n");
        printf("Name: %s\nID: %d\nCGPA: %.2f\n", s1.name, s1.id, s1.cgpa);
    }
    else if(s2.cgpa > s1.cgpa) {
        printf("Student 2 has the higher CGPA.\n");
        printf("Name: %s\nID: %d\nCGPA: %.2f\n", s2.name, s2.id, s2.cgpa);
    }
    else {
        printf("Both students have the same CGPA.\n");
    }

    return 0;
}