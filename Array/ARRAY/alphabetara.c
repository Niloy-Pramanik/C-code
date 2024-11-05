#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter a number: ");
scanf("%d",&n);
char arr[n];
printf("Enter %d number of alphabet: ");
for(int i=0;i<=n;i++){
    scanf("%c",&arr[i]);
}
for (int i = 0; i < n; i++) {
        if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' ||
            arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
            count++;
        }
    }

    // Print the number of vowels in the array
    printf("Count: %d\n", count);

return 0;

}