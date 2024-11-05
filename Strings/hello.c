#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    puts(str);
    return 0;
}