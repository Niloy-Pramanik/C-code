
#include <stdio.h>

struct complex {
   float real;
   float imag;
};

int main() {
   struct complex num1, num2, prod;

   printf("Enter real and imaginary parts of first complex number: ");
   scanf("%f %f", &num1.real, &num1.imag);

   printf("Enter real and imaginary parts of second complex number: ");
   scanf("%f %f", &num2.real, &num2.imag);

   // Multiplication of complex numbers
   prod.real = (num1.real * num2.real) - (num1.imag * num2.imag);
   prod.imag = (num1.real * num2.imag) + (num1.imag * num2.real);

   // Printing the result
   printf("(%f+%fi)*(%f+%fi)=%f+%fi\n", num1.real, num1.imag, num2.real, num2.imag, prod.real, prod.imag);

   return 0;
}
