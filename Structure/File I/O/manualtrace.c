#include<stdio.h>
void main(){
    int a= 508%7,num[4],sum=0;
    FILE *fp=fopen("input.txt","w");
    fprintf(fp,"%s\n","Good Morning");
    for(int i=0;i<5;i++){
        num[i]=2*i+a;
    }
    for(int i=0;i<4;i++){
        sum+=num[i];
        fprintf(fp,"%d\n",num[i]);
    }
    fprintf(fp,"%d",sum);
    fclose(fp);
        


}