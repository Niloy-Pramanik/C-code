//include<stdio.h>
// #include<math.h>
// struct complex{
// float real;
// float imag;
// };
// int main(){
// struct complex n;
// float mod,arg;
// printf("Enter real numbers: ");
// scanf("%f",n.real);
// printf("Enter imaginary numbers: ");
// scanf("%f",n.imag);

// mod=sqrt(n.real *n.real + n.imag*n.imag);
// arg= atan2(n.imag,n.real);

// printf("Modulus: %f\n",mod);
// printf("Argument: %f\n",arg);

// return 0;


// }
#include<stdio.h>
struct soldier{
    int Id;
    int Age;
    int Weight;
};
int main(){
    struct soldier s1;
    s1.Id= 11202017;
    s1.Age=19;
    s1.Weight=61;

    printf("ID is: %d\n",s1.Id);
    printf("Age is: %d\n",s1.Age);
    printf("Weight is: %d\n",s1.Weight);

    return 0;


}
