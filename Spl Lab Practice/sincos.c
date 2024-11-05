#include <stdio.h>
#include <math.h>

int main() {
  double x, term, sine = 0;   //sinX =x-x^3/3!
  int i;

  printf("Enter a value for x: ");
  scanf("%lf", &x);

  // convert x to radians
  x = x * M_PI / 180;

  for (i = 1; i <= 5; i++) {
    term = pow(-1, i-1) * pow(x, 2*i-1) / tgamma(2*i);
    sine += term;
  }

  printf("sin(%.2f) = %.3f", x, sine);

  return 0;
}
