// #include <stdio.h>
// int main ()
// {
// int n;
// printf ("Enter the number: ");
// scanf("%d",&n);
// for(int i=1;i>=n;i++)
// printf("%d",i);
// return 0;


// }
#include <stdio.h>

int main() {
  int num, reverse = 0;
  
  printf("Enter an integer: ");
  scanf("%d", &num);
  
 while (num != 0)
    reverse = reverse * 10 + num % 10;
    num /= 10;
  
  
  printf("The reverse of the input integer is: %d\n", reverse);
  
  return 0;
}
