// #include<stdio.h>
// int main()
// {
// int x,y,max;
// printf("Enter the number: ");
// scanf("%d %d",&x,&y);
// int max=(x<y);
// printf("Max: %d\n",max);
// return 0;



// }
#include <stdio.h>

int main() {
  int x, y;
  
  printf("Enter two numbers: ");
  scanf("%d%d", &x, &y);
  
  int max = (x > y) ? x : y;
  
  printf("Max: %d\n", max);
  
  return 0;
}
