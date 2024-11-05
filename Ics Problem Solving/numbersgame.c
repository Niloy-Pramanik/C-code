 #include<stdio.h>
 int main()
 {
 

  int p1,p2,g;

    printf("Player1 guess a number: ");
    scanf("%d", &p1);
    printf("Enter player2 guess chance: ");
    scanf("%d", &g);



    for(int i=1; i<=g,g--; i++)
    {
        printf("Player2 enter a number: ");
        scanf("%d", &p2);

        if(p1==p2)
        {
            printf("Right,Player-2 wins!");
            break;
        }

        else
        {
            if(g==0)
            {
                printf("Wrong,%d Choice(s) Left!\nPlayer-1 wins!",g);
            }
            else if(p1!=p2)
            {
                printf("Wrong,%d Choice(s) Left!\n",g);
            }



        }



    }
    return 0;
 }