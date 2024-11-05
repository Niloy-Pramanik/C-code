#include <stdio.h>

struct complex {
   float real;
   float imag;
};

int main() {
   struct complex num1, num2, sum, diff;

   printf("Enter real and imaginary parts of first complex number: ");
   scanf("%f %f", &num1.real, &num1.imag);

   printf("Enter real and imaginary parts of second complex number: ");
   scanf("%f %f", &num2.real, &num2.imag);

   // Addition of complex numbers
   sum.real = num1.real + num2.real;
   sum.imag = num1.imag + num2.imag;

   // Subtraction of complex numbers
   diff.real = num1.real - num2.real;
   diff.imag = num1.imag - num2.imag;

   // Printing the results
   printf("(%f+%fi)+(%f+%fi)=%f+%fi\n", num1.real, num1.imag, num2.real, num2.imag, sum.real, sum.imag);
   printf("(%f+%fi)-(%f+%fi)=%f+%fi\n", num1.real, num1.imag, num2.real, num2.imag, diff.real, diff.imag);

   return 0;
}
