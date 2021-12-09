#include<stdio.h>
int count;
int visited[1];
void track(int *num_arr, int x, int size){
    int i;
    for(i=0;i<=1;i++){
        num_arr[x]=i;
        if(x==0) track(num_arr,x+1,size);
        else{
            //Duyet nguoc lai check vet
            if(num_arr[x]==0){
                int y;
                for(y=x-1;num_arr[y]==1;y--)
                    visited[1]++;
                if(visited[1]<2){
                    visited[1]=0;
                    continue;
                }
                else if(visited[1]==6){
                    visited[1]=0;
                    if(x==size-1){
                        int i;
                        printf("Chuoi thoa man: ");
                        for(i=0;i<size;i++)
                        printf(" %d ",num_arr[i]);
                        printf("\n");
                        count++;
                        return;
                    } 
                    else{
                        track(num_arr,x+1,size);
                        return;
                    }
                }
                else visited[1]=0;
            }    
            /////////////////////////
            if(x==size-1){
                if(num_arr[x]==1)
                    if(num_arr[x-1]==0) return;
                    int i;
                    printf("Chuoi thoa man: ");
                    for(i=0;i<size;i++)
                        printf(" %d ",num_arr[i]);
                    printf("\n");
                    count++;
            }
            else track(num_arr,x+1,size);
        }
    }
}
int main(){
    int n;
    printf("Do dai:");
    scanf("%d",&n);
    int num_arr[n];
    int size=sizeof(num_arr)/sizeof(int);
    visited[1]=0;
    track(num_arr,0,size);
    printf("The num of binary strings: %d ",count);
    printf("\n");
}