#include<stdio.h>
int main(){ //array is a pointer
 int nid[5];

 //input
 int *ptr = &nid[0];
 for(int i=0;i<=5;i++){
    printf("%d index :",i);
    scanf("%d",nid [i]); //ptr/int 
 }
 //output
 for(int i=0;i<=5;i++){
    printf("%d index = %d\n",i ,nid [i]);

 }
 return 0;


}