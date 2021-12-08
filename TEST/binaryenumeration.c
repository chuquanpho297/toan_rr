#include<stdio.h>
#include<stdlib.h>
int main(){
    int num; int i;
    printf("Size:");
    scanf("%d",&num);
    char*str=(char*)malloc(num*sizeof(char));
     for(i=0;i<num;i++)
         str[i]='0';
     str[num]='\0';
    do
    {   
        i=num-1;
        printf("%s\n",str);
        while (i>=0&&str[i]=='1'){
        str[i]='0';
        i--;
        }
        str[i]='1';
    } 
    while(i>=0);       
}