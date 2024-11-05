#include<stdio.h>
#include<math.h>
int main()
{
 //Equal statement
    printf ("%d\n",4 == 10);
    printf ("%d\n",4>3);
 // only greater than
    printf ("%d\n",4<5);
 // less than equal
     printf ("%d\n",4<=2);
 // not equal
      printf ("%d\n",4!= 4);

 //*Logical Operators uses &&
       printf ("%d\n",4>3 && 5>2);
        printf ("%d\n",4<3 && 5>3);
 // Logical Or (||)
         printf ("%d\n",4<5 || 5<6);
// Logical not (!)
 printf ("%d\n",!( (1>5) && (5>6)));
 //Assignment Operators


    return 0;
}