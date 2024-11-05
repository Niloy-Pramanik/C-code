#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("n must be an odd number.\n");
    } else {
        int matrix[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        int first_row_sum = 0;
        int last_row_sum = 0;
        int first_diag_sum = 0;
        int second_diag_sum = 0;
        int middle_element = matrix[n/2][n/2];

        for (int i = 0; i < n; i++) {
            first_row_sum += matrix[0][i];
            last_row_sum += matrix[n-1][i];
            first_diag_sum += matrix[i][i];
            second_diag_sum += matrix[i][n-1-i];
        }

        int total_sum = first_row_sum + last_row_sum - 2*middle_element + first_diag_sum + second_diag_sum;

        printf("%d\n", total_sum);
    }

    return 0;
}
