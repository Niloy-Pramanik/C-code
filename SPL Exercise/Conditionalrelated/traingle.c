// #include<stdio.h>
// int main()
// {
// int n1,n2,n3,sum;
// printf("Enter the value: ");
// scanf("%d %d %d",&n1,&n2,&n3);
// sum=n1+n2+n3;
// if(sum<=180){
//     printf("Yes");
// }
// else if(sum!=180){
//     printf("No");

// }
// return 0;

// }
#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;
    printf("Enter the three angles of the triangle: \n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3) == 180)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
