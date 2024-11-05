#include<stdio.h>
int main(){
FILE *fptr;
fptr= fopen("Swap.txt","r");
int a;
printf("Enter two numbers: ");
fscanf(fptr,"%d",&a);
int b;
fscanf(fptr,"%d",&b);

fclose(fptr);

fptr= fopen("Swap.txt","w");
fprintf(fptr,"%d",a*b);     
fclose(fptr);
return 0;

}