#include<stdio.h>
int main ()
// switch work for turn on the declaire values
{
    int day;
    printf("Enter the day(1-7):");
    scanf ("%d", &day);
    switch (day)
    {
        case 1 : printf ("monday \n");
        break;
        case 2 : printf ("tuesday \n");
        break;
        case 3 : printf ("wednesday \n");
        break;
        case 4 : printf ("thusday \n");
        break;
        case 5 : printf ("fridayday \n");
        break;
        case 6 : printf ("saturday \n");
        break;
        case 7 : printf ("sunday \n");
        break;
    
    default: printf("not a valid day! \n");
        
    }
    return 0;
}
