#include <stdio.h>

int main() {
   int matrix[100][100];
   int n, i, j;  //diagonals

   // Get input for matrix size
   printf("Enter the size of the square matrix: ");
   scanf("%d", &n);

   // Get input for matrix elements
   printf("Enter the elements of the matrix:\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   // Print major diagonal
   printf("Major diagonal: ");
   for (i = 0; i < n; i++) {
      printf("%d ", matrix[i][i]);
   }

   // Print minor diagonal
   printf("\nMinor diagonal: ");
   for (i = 0; i < n; i++) {
      printf("%d ", matrix[i][n-i-1]);
   }

   return 0;
}
