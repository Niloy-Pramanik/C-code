#include<stdio.h>
int main()
{
int N;
float A,HW,CT,MT,TF,total;
printf("Enter the number: ");
scanf("%d",&N);
for(int i=1;i<=N;i++){
printf("Enter the marks of students %d\n: ");
scanf("%f %f %f %f %f",&A,&HW,&CT,&MT,&TF);
printf("Enter attendence(out of 5): ");
printf("Enter HW (out of 10): ");
printf("Enter CT (out of 15): ");
printf("Enter MT (out of 30): ");
printf("Enter TF (out of 40): ");

total = (A / 5 * 0.05) + (HW / 10 * 0.1) + (CT / 15 * 0.15) + (MT / 50 * 0.3) + (TF / 100 * 0.4);
if(total>=0.9){
printf("Grade is A");
}
 else if(total>= 0.86){
 printf("Grade is A-");
 }
 else if(total>=0.82){
printf("Grade is B+");
}
else if(total>=0.78){
printf("Grade is B");
}
 else if(total>=0.74){
printf("Grade is B-");
}
else if(total>=0.70){
printf("Grade is C+");
}

else{
    printf("Grade is F");
}
}
return 0;

}