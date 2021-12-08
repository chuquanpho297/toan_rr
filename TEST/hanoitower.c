//F_n=2F_n-1 + 1

#include<stdio.h>
int count;
void disk_mov(int n,char begin, char end,char tem){
    if(n==1){
        printf("The disk 1 move from %c to %c\n",begin,end);
        count++;
        return;
    }
    disk_mov(n-1,begin,tem,end);
    printf("The disk %d move from %c to %c\n",n,begin,end);
    count++;
    disk_mov(n-1,tem,end,begin);
}
int main(){
    char a='A', b='B', c='C';
    int n;
    printf("Input n: ");
    scanf("%d",&n);
    disk_mov(n,a,b,c);
    printf("The count: %d\n",count);
}