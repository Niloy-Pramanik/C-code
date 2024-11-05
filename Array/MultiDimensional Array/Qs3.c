#include <stdio.h>

int main() {
   int matrix[3][3];
   int i, j;
   int determinant = 0;

   // Get input for matrix
   printf("Enter a 3 by 3 matrix:\n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   // Calculate determinant
   for (i = 0; i < 3; i++) {
      determinant += (matrix[0][i] * (matrix[1][(i+1)%3] * matrix[2][(i+2)%3] - matrix[1][(i+2)%3] * matrix[2][(i+1)%3]));
   }

   // Print determinant
   printf("The determinant of the matrix is: %d\n", determinant);

   return 0;
}
