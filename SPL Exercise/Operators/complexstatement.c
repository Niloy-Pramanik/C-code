#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter tthree number: ");
scanf("%d %d %d",&a,&b,&c);
 bool s1 = (a + b <= 80) && (c >= 0);
  printf("s1 = %d\n", s1);
    bool s2 = (a - b == 0) && (c != 0);
    printf("s2 = %d\n", s2);
    bool s3 = (a != b) && (!(b < c) && c > 0);
    printf("s3 = %d\n", s3);
    bool s4 = (a != b) || (!(b < c) && c > 0);
    
    printf("s4 = %d\n", s4);

return 0;




}