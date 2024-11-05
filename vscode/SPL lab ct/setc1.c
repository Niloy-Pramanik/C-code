
#include <stdio.h>

void divide(float *x, int *n) {
    if (*n != 0) {
        *x = *x / *n;
    } else {
        printf("Error: division by zero!\n");
    }
}

int main() {
    float x1;
    int n1 ;
    printf("Enter the numbers: ");
    scanf("%f",&x1);
    scanf("%d",&n1);
    

    divide(&x1, &n1);
    printf("%.2f\n", x1);

  

    int n3 = 0;
    divide(&x1, &n3);

    return 0;
}
