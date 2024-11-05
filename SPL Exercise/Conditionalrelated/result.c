#include<stdio.h>
int main()
{
float n;
printf("Enter the score: ");
scanf("%f",&n);
if(n>=90){
    printf("Grade: A");
}
else if(n>=86){
    printf("Grade: A-");
}
else if(n>=82){
    printf("Grade: B+");
}
else if(n>=78){
    printf("Grade: B");
}
else if(n>=74){
    printf("Grade: B-");
}
else if(n>=70){
    printf("Grade: C+");
}
else if(n>=66){
    printf("Grade: C-");
}
else if(n>=62){
    printf("Grade: D+");
}
else if(n>=58){
    printf("Grade: D");
}

else if(n<=55){
    printf("Grade: F");
}


return 0;


}