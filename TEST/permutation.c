#include<stdio.h>

int count=0;
void swap(int* a,int* b){
    if(a==b){
        return;
    }
    else{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    }
}
void permute(int* arr, int l, int r){
    if(l==r){
        int i;
        count++;
        printf("%d:",count);
        for(i=0;i<=r;i++)
            printf(" %d ",arr[i]);
        printf("\n");
        
    }
    else{
        int i;
        for(i=l;i<=r;i++){
            swap(&arr[l],&arr[i]);
            permute(arr, l+1, r);
            swap(&arr[l],&arr[i]);
        }
    }

}
void input(int * arr,int size){
    int i;
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
}
int main(){
    int n;
    printf("The size of arr:");
    scanf("%d",&n);
    
    int arr[n];
    int size=sizeof(arr)/sizeof(int);
    input(arr,size);
    permute(arr,0,size-1);
    printf("\n");
}