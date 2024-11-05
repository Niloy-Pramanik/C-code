#include<stdio.h>
int main()
{
    char sing_ch;
    printf("Enter the alphabet (a-z):");
    scanf("%c",&sing_ch);
    if(sing_ch=='a'||sing_ch=='e'||sing_ch=='i'||sing_ch=='o'||sing_ch=='u') (sing_ch) {     printf(" The alphabet is Vowel\n");
    
        }

    else if(sing_ch>='a'&&sing_ch<='z'){
        printf("THe alphabet is Consonant\n");
    }
    else{
        printf("The attempt is wrong");
    }
    return 0;
}
