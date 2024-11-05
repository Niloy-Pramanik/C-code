#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter values for a, b, and c: ");
    scanf("%f%f%f", &a, &b, &c);
    
    float discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        printf("Imaginary\n");
    } else {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("%.2f %.2f\n", root1, root2);
    }
    
    return 0;
}
