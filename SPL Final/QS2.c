
#include <stdio.h>
#include <string.h>

struct Program {
    char name[100];
    int total_memory;
    int used_memory;
};

int allCaps(char *input) {
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numberOfPrograms;
    printf("Enter the Info: ");
    scanf("%d", &numberOfPrograms);

    struct Program programs[numberOfPrograms];
    for (int i = 0; i < numberOfPrograms; i++) {
        printf("\nProgram %d details:\n", i + 1);
        printf("Name: ");
        scanf("%s", programs[i].name);
        printf("Total Memory: ");
        scanf("%d", &programs[i].total_memory);
        printf("Used Memory: ");
        scanf("%d", &programs[i].used_memory);

        if (allCaps(programs[i].name) && programs[i].used_memory >= programs[i].total_memory) {
            printf("\nVirus found: %s\n", programs[i].name);
        }
    }

    int virusCount = 0;
    for (int i = 0; i < numberOfPrograms; i++) {
        if (allCaps(programs[i].name) && programs[i].used_memory >= programs[i].total_memory) {
            virusCount++;
        }
    }

    if (virusCount == 0) {
        printf("\nNo viruses found.");
    } else if (virusCount == 1) {
        printf("\n%d virus found.", virusCount);
    } else {
        printf("\n%d viruses found.", virusCount);
    }

    return 0;
}
