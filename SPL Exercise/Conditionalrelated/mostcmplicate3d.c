#include<stdio.h>

int main()
{
    int X, n1, n2, n3, flag = 0;

    printf("Enter the number X: ");
    scanf("%d", &X);

    printf("Enter the first guess n1: ");
    scanf("%d", &n1);

    if (n1 == X)
    {
        printf("Right, Player-2 wins!\n");
        flag = 1;
    }
    else
    {
        printf("Wrong, 2 Chance(s) Left!\n");
    }

    if (flag == 0)
    {
        printf("Enter the second guess n2: ");
        scanf("%d", &n2);

        if (n2 == X)
        {
            printf("Right, Player-2 wins!\n");
            flag = 1;
        }
        else
        {
            printf("Wrong, 1 Chance(s) Left!\n");
        }
    }

    if (flag == 0)
    {
        printf("Enter the third guess n3: ");
        scanf("%d", &n3);

        if (n3 == X)
        {
            printf("Right, Player-2 wins!\n");
        }
        else
        {
            printf("Wrong, 0 Chance(s) Left!\n");
            printf("Player-1 wins!\n");
        }
    }

    return 0;
}
