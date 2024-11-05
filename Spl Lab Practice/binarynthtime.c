#include <stdio.h>

int main() {      //print 101010101010
    int n, i;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("1, ");
   
    for (i = 1; i< n; i++) {
        printf("%d, ", i % 2==0);
        
    }
    
    return 0;
}
