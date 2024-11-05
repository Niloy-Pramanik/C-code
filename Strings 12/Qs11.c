#include<stdio.h>
int main(){

char str1[100],str2[100];
int i,j,flag;
printf("Enter 1st string: ");
fgets(str1,100,stdin);
printf("Enter 2nd string: ");
fgets(str2,100,stdin);

str1[strcspn(str1, "\n")]='\0';
str2[strcspn(str2,"\n")]='\0';

flag=0;
for(i=0;str1[i] !='\0';i++){
    j=0;
    while(str1[i+j]==str2[j]){
        j++;
        if(str2[j]=='\0'){
            flag=1;
            break;
        }
    }
    if(flag==1){
        break;
    }
}
if(flag==1){
    printf("Substring\n");
}
else{
    printf("Not substring\n");
}

return 0;

}