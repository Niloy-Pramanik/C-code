#include<stdio.h>
int main(){
FILE *fptr;
fptr= fopen("Test.txt","r");


// fscanf(fptr,"%c",&ch);
// printf("character = %c\n",&ch);
// fscanf(fptr,"%c",&ch);
// printf("character = %c\n",&ch);
// fscanf(fptr,"%c",&ch);
// printf("character = %c\n",&ch);
// fscanf(fptr,"%c",&ch);
// printf("character = %c\n",&ch);
// fscanf(fptr,"%c",&ch);
// printf("character = %c\n",&ch); 




// printf("character = %c\n",'M');

// printf("character = %c\n",'A');

// printf("character = %c\n",'N');

// printf("character = %c\n",'G');

// printf("character = %c\n",'O'); 
// fclose(fptr);

// printf("character = %c\n",fgetc(fptr));

// printf("character = %c\n",fgetc(fptr));

// printf("character = %c\n",fgetc(fptr));

// printf("character = %c\n",fgetc(fptr));

// printf("character = %c\n",gets(fptr)); 
// fclose(fptr);
// return 0; 

 fputc('M',fptr);
  fputc('A',fptr);
  fputc('N',fptr);
   fputc('G',fptr);
   fputc('O',fptr);
   fclose(fptr);
   return 0;







}
