#include<stdio.h>

int x,y;
int visited[1];
//int x=0;
//xau chuoi ma so 1 xuat hien toi da 3 lan
void gen_arr1(int* num_arr, int size,int x){
    int i;
    for(i=0;i<=1;i++){
        num_arr[x]=i;
        if(num_arr[x]==1)
            visited[1]+=1;
        if(visited[1]==3){
            visited[1]-=1;
            return;
        }
        else {
            if(x==size-1){
                int i,x;
                x++;
                printf("%d: ",x);
                for(i=0;i<size;i++)
                    printf(" %d ",num_arr[i]);
                printf("\n");
            }
            else gen_arr1(num_arr,size,x+1);
        }
        if(num_arr[x]==1)
            visited[1]-=1;
    }
}
//hai so 1 khong dung canh nhau
void gen_arr2(int* num_arr, int size, int x){
    int i;
    for(i=0;i<=1;i++){
        num_arr[x]=i;
        if(x==0)
            gen_arr2(num_arr,size,x+1);
        else{
            if(num_arr[x]==1 && num_arr[x-1]==1){
                return;
            }
            else{
                    if(x==size-1){
                        int i;
                        y++;
                        printf("%d: ",y);
                        for(i=0;i<size;i++)
                            printf(" %d ",num_arr[i]);
                        printf("\n");
                    }
                    else
                    gen_arr2(num_arr,size,x+1);
                }
        }

    }
}
int main(){
    int n;
    printf("The length: ");
    scanf("%d",&n);
    int num_arr[n];
    int size=sizeof(num_arr)/sizeof(int);
    gen_arr2(num_arr,size,0);
    gen_arr1(num_arr,size,0);
}