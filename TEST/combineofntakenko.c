#include<stdio.h>
#include<stdlib.h>
int main(){
    int k,num,j;
    int* n;
    int i=0;
    printf("Num:");
    scanf("%d",&num);
    printf("subsetE:");
    scanf("%d",&k);
    printf("Numbers:");
    n=(int*)calloc(num,sizeof(int));
    for(int i=0;i<num;i++){
        scanf("%d",&n[i]);
    }
    do
    {
        printf("{");
        for(i=0;i<k;i++)
            printf("%d ",n[i]);
        printf("}\n");
        i=k-1;
        while(i>=0 && n[i]==num-k+i+1)
            i--;
        if(i>=0){
            n[i]++;
            for( j=i+1;j<=k-1;j++)
                n[j]=n[j-1]+1;
        }
    } while (i>=0);
}