#include<stdio.h>
int count;
void factor(int x,int v){
        int i;
        for(i=v;i>0;i--){
            //printf("%d\t",i);
            x-=i;
            if(x==0){
                //printf("\n");
                count++;
            }
            if(x<=i)    
                factor(x,x);
            else
                factor(x,i);
            x+=i;
        }
}
int main(){
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    factor(x,x);
    printf("The count: %d",count);

}