// #include <stdio.h>
// #include <math.h>

// double evaluate_equation(double x) {
//     return 2 * cos(2 * x) - 3 * sin(x) + log(pow(x, 2));
// }

// int main() {
//     double x;

//     printf("Enter a value for x (in degrees): ");
//     scanf("%lf", &x);

//     x = (x * M_PI) / 180.0; // convert x from degrees to radians

//     double result = evaluate_equation(x);

//     printf("Result: %lf\n", result);

//     return 0;
// }
#include <stdio.h>

int main() {
   int a;  // Declare a variable uninitialized
   int b = 10;  // Declare and initialize a variable in one statement
   int c = 20, d = 30, e = 40;  // Declare and initialize multiple variables with different values in one statement
   int f = 50, g = 50, h = 50;  // Declare and initialize multiple variables with the same value in one statement

   printf("Value of a: %d\n", a);
   printf("Value of b: %d\n", b);
   printf("Value of c: %d\n", c);
   printf("Value of d: %d\n", d);
   printf("Value of e: %d\n", e);
   printf("Value of f: %d\n", f);
   printf("Value of g: %d\n", g);
   printf("Value of h: %d\n", h);

   return 0;
}

