// #include<stdio.h>
 
//   int main()
//   {
//     int global=10;
// printf("Global: %d\n",global);
// int Local=20;
// printf("Local: %d",Local);
// printf("Global: %d",global);
// return 0;



//   }
#include <stdio.h>

int global_variable = 10;

int main() {
    printf("Global: %d\n", global_variable);

    int global_variable = 20;
    printf("Local: %d\n", global_variable);

    printf("Global: %d\n", global_variable);

    return 0;
}
