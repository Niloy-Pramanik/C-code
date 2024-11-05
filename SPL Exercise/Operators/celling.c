#include <stdio.h>
#include <math.h>

int main() {
    double x,a,b,c;

    printf("Enter a floating point number: ");
    scanf("%lf", &x);

     a = ceil(x);
     b = floor(x);
     c = fabs(x);

    printf("A = %d, B = %d, C = %.1lf\n", a, b, c);

    return 0;
}
