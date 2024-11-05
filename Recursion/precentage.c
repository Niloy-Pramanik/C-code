#include<stdio.h>
int calcpercentage(int science,int math,int english){

return((science+math+english)/3);

}
int main(){
int sc,math,english;
printf("Enter the marks: ");
scanf("%d %d %d",&sc,&math,&english);
printf("Percentage is: %d",calcpercentage(sc,math,english));
return 0;


}