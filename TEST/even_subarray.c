#include<stdio.h>
int count;
void even_find(int* num_arr,int size){
    int sum,i,j,k;
    sum=0;
    for(i=0;i<size;i++){
        for(j=i;j<size;j++){
            sum+=num_arr[j];
            if(sum%2==0){
                printf("The sum: %d\t=",sum);
                count++;
                for(k=i;k<=j;k++){
                    printf("%d",num_arr[k]);
                    if(k!=j)
                        printf(" + ");
                    else
                        printf(".");
                }    
                printf("\n");
            }
        }
        sum=0;
        printf("\n");
    }
} 
void input_arr(int* num_arr, int size){
    int i;
    printf("The array: ");
    for(i=0;i<size;i++){
        scanf("%d",&num_arr[i]);
    }
}
int main(){
    int n;
    printf("The number of index:");
    scanf("%d",&n);
    int num_arr[n];
    int size=sizeof(num_arr)/sizeof(int);
    input_arr(num_arr,size);
    even_find(num_arr,size);
    printf("The num of even sub_array: %d ",count);
    printf("\n");
}