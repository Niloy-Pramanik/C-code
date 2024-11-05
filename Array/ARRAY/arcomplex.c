#include <stdio.h>

int main() {
    int n, i, j, total = 0, middle, box_size;
    int matrix[100][100];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    middle = (n - 1) / 2;
    box_size = (n - 1) / 2;
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i >= middle - box_size && i <= middle + box_size && j >= middle - box_size && j <= middle + box_size) {
                total += matrix[i][j];
            }
        }
    }
    
    printf("%d", total);
    
    return 0;
}
