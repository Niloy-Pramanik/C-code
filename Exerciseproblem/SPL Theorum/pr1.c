// #include<stdio.h>

// int main(){
//     char name[100];
//     char student_Id[50]="0112230508";
//     printf("Enter the string: ");
//     fgets(name,100,stdin);

//     for(int i=0;name[i] !='\0';i++){
//         if(i=0 || name[i-1]== ' '){
//             if(name[i]>='a' && name[i]<='z'){
//                 name[i]-=32;
//             }
//         }
//     }


//     int len=0;
//     while(name[len] !='\0'){
//         len++;
//     }
//     for(int i=0;student_Id[i] !='\0';i++){
//         name[len++]=' ';
//         name[len++]= student_Id[i];
//     }
//     name[len]='\0';
//     printf("Output: %s",name);

//     return 0;

// }
#include <stdio.h>

int main() {
    char sentence[100];
    char student_id[10] = "011202017";
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    // Convert the first character of every word to uppercase
    for(int i = 0; sentence[i] != '\0'; i++) {
        if(i == 0 || sentence[i - 1] == ' ') {
            if(sentence[i] >= 'a' && sentence[i] <= 'z') {
                sentence[i] -= 32;
            }
        }
    }
    
    // Append the student ID at the end of the sentence
    int len = 0;
    while(sentence[len] != '\0') {
        len++;
    }
    for(int i = 0; student_id[i] != '\0'; i++) {
        sentence[len++] = ' ';
        sentence[len++] = student_id[i];
    }
    sentence[len] = '\0';
    
    printf("Output: %s", sentence);
    return 0;
}
