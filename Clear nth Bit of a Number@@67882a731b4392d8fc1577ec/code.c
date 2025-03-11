#include<stdio.h>
int main(){
    int num,N;
    scanf("%d %d",&num,&N);
    num = num & ~(1 << N);
        printf("%d\n",num);
    return 0;
    }

