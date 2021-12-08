#include<stdio.h>
#include<string.h>

void  insertsrtanndprint(int arr[],int n){
    int cursor,j,i;

    for( i=1;i<n;i++){
        cursor=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>cursor){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=cursor;
    }
    for(int a=0;a<n;a++)
    printf("%d ",arr[a]);
}

int main(){
    int arr[]={4,6,8,2,1,7};
        insertsrtandprint(arr,sizeof(arr)/sizeof(arr[0]));
}