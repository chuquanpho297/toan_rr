#include <stdio.h>
//Solution1:
/*
void rotarr(int arr[],int numIndex,int numRotIndex){
    int parr[numIndex];
     
    for(int i=0;i<numIndex;i++){
    	if(i<numIndex-numRotIndex){
		parr[i]=arr[numRotIndex+i];
		printf("%d",parr[i]);
	}
	else{
    		parr[i]=arr[i-(numIndex-numRotIndex)];
	    	printf("%d",parr[i]);
	}
     }
}

int main() {
	//code
	int arr[]={1,2,3,4,5};
	int a=sizeof(arr)/sizeof(arr[0]);
	rotarr(arr,a,2);	
	return 0;
}
*/
//Solution2:

void rotByOne(int arr[],int indexNum){
	int temp;
	temp=arr[0];

	for(int i=1;i<indexNum;i++)
		arr[i-1]=arr[i];
	arr[indexNum-1]=temp;
}

void rotNum(int arr[], int rotNum, int indexNum){
	for(int i=0;i<rotNum;i++)
		rotByOne(arr,indexNum);
} 

int main(){
	int arr[]={1,2,3,4,5};
	int indexNum=sizeof(arr)/sizeof(arr[0]);
	rotNum(arr,2,indexNum);
	for(int i=0;i<indexNum;i++)
	printf("%d",arr[i]);	
	return 0;
}


